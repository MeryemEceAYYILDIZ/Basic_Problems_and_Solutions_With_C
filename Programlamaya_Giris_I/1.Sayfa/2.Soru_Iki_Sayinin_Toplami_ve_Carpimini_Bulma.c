#include<stdio.h>
//Girilen 2 say�n�n toplam�n� ve �arp�m�n� bulan program
int main(){
	int x, y, toplam, carpim;
	printf("Iki sayi giriniz:\n");
	scanf(" %d\n %d", &x, &y);
	toplam=x+y;
	carpim=x*y;
	printf("Sayilarin;\n toplami: %d\n carpimi: %d", toplam, carpim);
	return 0;
}
