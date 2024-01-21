#include<stdio.h>
//Girilen 2 sayýnýn toplamýný ve çarpýmýný bulan program
int main(){
	int x, y, toplam, carpim;
	printf("Iki sayi giriniz:\n");
	scanf(" %d\n %d", &x, &y);
	toplam=x+y;
	carpim=x*y;
	printf("Sayilarin;\n toplami: %d\n carpimi: %d", toplam, carpim);
	return 0;
}
