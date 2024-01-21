#include<stdio.h>
//Kýsa ve uzun kenarý girilen dikdörtgenin alanýný ve çevresini hesaplayan programýn algoritmasý
int main(){
	int x, y, alan, cevre; // x=kýsa kenar, y=uzun kenar
	printf("Dikdortgenin kisa kenarini giriniz\n ");
	scanf("%d", &x);
	printf("Dikdortgenin uzun kenarini giriniz\n ");
	scanf("%d", &y);
	alan=x*y;
	cevre=(2*x)+(2*y);
	printf(" Dikdortgenin cevresi: %d\n Dikdortgenin alani: %d", cevre, alan);
	return 0;
}
