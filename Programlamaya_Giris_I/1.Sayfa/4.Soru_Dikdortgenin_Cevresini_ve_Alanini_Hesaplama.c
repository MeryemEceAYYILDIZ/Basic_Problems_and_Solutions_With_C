#include<stdio.h>
//K�sa ve uzun kenar� girilen dikd�rtgenin alan�n� ve �evresini hesaplayan program�n algoritmas�
int main(){
	int x, y, alan, cevre; // x=k�sa kenar, y=uzun kenar
	printf("Dikdortgenin kisa kenarini giriniz\n ");
	scanf("%d", &x);
	printf("Dikdortgenin uzun kenarini giriniz\n ");
	scanf("%d", &y);
	alan=x*y;
	cevre=(2*x)+(2*y);
	printf(" Dikdortgenin cevresi: %d\n Dikdortgenin alani: %d", cevre, alan);
	return 0;
}
