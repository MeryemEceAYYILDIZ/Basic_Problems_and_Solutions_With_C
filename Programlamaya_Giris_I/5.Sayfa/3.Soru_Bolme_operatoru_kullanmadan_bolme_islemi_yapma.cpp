#include<stdio.h>
//Bölme iþlemini bölme operatörü kullanmadan hesaplayan program
int main()
{
	int x, y, kalan, sayac=0;
	printf("Bolme islemi icin 2 sayi giriniz:\n");
	scanf("%d %d", &x, &y);
	kalan=x;
	do{
		kalan=kalan-y;
		sayac++;
	}
	while(kalan>=y);
	printf("%d", sayac);
return 0;	
}
