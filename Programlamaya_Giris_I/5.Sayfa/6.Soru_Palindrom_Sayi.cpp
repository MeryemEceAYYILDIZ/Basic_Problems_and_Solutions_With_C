#include<stdio.h>
//Palindrom say� kontrol�(�r:242 palindromdur, tersten yaz�l��� kendisine e�ittir)
int main()
{
	int x, y, kalan, ters=0; //y ge�ici de�i�ken. Daha sonra kar��la�t�rma yapabilmek i�in x'i koruma ama�l�
	printf("Tersten yazdirmak istediginiz sayiyi giriniz:\n");
	scanf("%d", &x);
	y=x;
	do{
		kalan=y%10;
		ters=ters*10+kalan;
		y=y/10;
	}
	while(y>0);
	printf("%d'nin tersi = %d\n", x, ters);
	if(x==ters){
		printf("Palindrom sayidir");
	}
	else{
		printf("Palindrom sayi degildir");
	}
return 0;	
}
