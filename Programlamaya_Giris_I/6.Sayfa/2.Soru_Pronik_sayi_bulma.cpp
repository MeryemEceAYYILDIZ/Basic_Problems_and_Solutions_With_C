#include<stdio.h>
//Girilen say�n�n Pronic (ard���k iki say�n�n �arp�m�na e�it) olup olmad���n� bulunuz. (�rnek: 2, 6, 12, 20, �, 132, 156, ..)
int main()
{
	int x,i,pronik,sayac=0;
	printf("Bir sayi giriniz:\n");
	scanf("%d",&x);
	for(i=1 ; i<x; i++){
		pronik=i*(i+1);
		if(pronik==x){
			sayac=sayac+1;
			break;
		}
	}
	if(sayac>0){
		printf("%d pronik sayidir",x);
	}
	else{
		printf("%d pronik sayi degildir",x);
	}
return 0;
}
