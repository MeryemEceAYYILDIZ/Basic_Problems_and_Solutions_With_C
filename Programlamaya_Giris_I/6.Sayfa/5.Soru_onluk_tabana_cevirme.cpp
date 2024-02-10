#include<stdio.h>
//Ýkilik tabanda verilen bir sayýyý onluk tabana çeviren algoritmayý yazýnýz
int main()
{
	int binarySayi, sayac=0, deger, sayi=0, i;
	printf("Binary bir sayi giriniz:\n");
	scanf("%d", &binarySayi);
	do{
		int usAlma=1;
		deger=binarySayi%10;
		if(deger==1){
			if(sayac==0){
				sayi+=1;
			}else{
				for(i=0; i<sayac; i++){
				usAlma*=2;
			}
			sayi+=usAlma;
			}	
		}
		sayac++;
		binarySayi/=10;
	}while(binarySayi>0);
	printf("%d", sayi);
}
