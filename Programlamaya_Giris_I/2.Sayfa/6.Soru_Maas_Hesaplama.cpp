#include<stdio.h>
//Personelin sabit maa�� ve �ocuk say�s� girildi�inde yeni maa� miktar�n� hesaplay�n�z.
//(�ocuk say�s� 1 ise %5, iki ise %10,�� veya daha fazla ise %15 zam yap�lacakt�r.)

int main()
{
	int sm, cs, nm; //sm= Sabit Maa�   cs= �ocuk Say�s�   nm=Net Maa�
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
