#include<stdio.h>
//Girilen sayýnýn Mükemmel Sayý(tam bölenleri toplamý kendisine eþit olan) olup olmadýðýný bulunuz.(örnek: 6, 28, 496, …)
int main()
{
	int x,i,toplam=0;
	printf("Bir sayi giriniz:\n");
	scanf("%d",&x);
	for(i=1; i<=x/2; i++){
		if(x%i==0){
			toplam=toplam+i;
		}
	}
	if(toplam==x){
		printf("%d mukemmel sayidir.",x);
	}
	else{
		printf("%d mukemmel sayi degildir.",x);
	}
return 0;
}
