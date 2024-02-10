#include<stdio.h>
//Girilen N deðerine göre ilk N adet Asal sayýyý yazdýrýnýz.(N=5 için => 2,3,5,7,11)
int main()
{
	int i, j, sayi=2, n, sayac, sayac2=0;
	printf("Kac tane asal sayi yazdirmak istiyorsunuz?\n");
	scanf("%d", &n);
	while(sayac2<n){
		sayac=0;
		for(j=2; j<sayi; j++){
			if(sayi%j==0){
				sayac++;
				break;
			}
		}
		if(sayac==0){
			printf("%d\n", sayi);
			sayac2++;
		}
		sayi++;
	}
	return 0;
}
