#include<stdio.h>
//Girilen bir say�n�n basamak de�erlerini yazd�rma
int main()
{
	int x, kalan, sayac=0;
	printf("Basamak degerlerini ogrenmek istediginiz sayiyi giriniz:\n");
	scanf("%d", &x);
	do{
		kalan=x%10;
		sayac++;
		printf("%d. basamagi=%d\n", sayac, kalan);
		x=x/10;
	}
	while(x>0);
return 0;	
}
