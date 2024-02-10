#include<stdio.h>
//Klavyeden girilen a ve b sayýlarýna göre a^b hesaplayýnýz
int main()
{
	int a, b, sonuc=1, i;
	printf("2 sayi giriniz:\n");
	scanf("%d %d", &a, &b);
	for(i=1; i<=b; i++){
		sonuc=sonuc*a;
	}
	printf("%d", sonuc);
}
