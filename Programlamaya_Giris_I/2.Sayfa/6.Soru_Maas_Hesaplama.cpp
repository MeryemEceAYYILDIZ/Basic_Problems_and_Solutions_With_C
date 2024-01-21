#include<stdio.h>
//Personelin sabit maaşı ve çocuk sayısı girildiğinde yeni maaş miktarını hesaplayınız.
//(Çocuk sayısı 1 ise %5, iki ise %10,üç veya daha fazla ise %15 zam yapılacaktır.)

int main()
{
	int sm, cs, nm; //sm= Sabit Maaş   cs= Çocuk Sayısı   nm=Net Maaş
	printf("Sabit maasi giriniz:\n");
	scanf("%d", &sm);
	printf("Cocuk sayisini giriniz:\n");
	scanf("%d", &cs);
	if(cs==1){
		nm=sm+(sm*5/100);
	}
	else if(cs==2){
		nm=sm+(sm*10/100);
	}
	else if(cs>2){
		nm=sm+(sm*15/100);
	}
	printf("Net maas= %d", nm);
return 0;
}
