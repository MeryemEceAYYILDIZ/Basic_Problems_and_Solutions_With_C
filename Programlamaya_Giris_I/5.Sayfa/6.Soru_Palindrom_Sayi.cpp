#include<stdio.h>
//Palindrom sayý kontrolü(Ör:242 palindromdur, tersten yazýlýþý kendisine eþittir)
int main()
{
	int x, y, kalan, ters=0; //y geçici deðiþken. Daha sonra karþýlaþtýrma yapabilmek için x'i koruma amaçlý
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
