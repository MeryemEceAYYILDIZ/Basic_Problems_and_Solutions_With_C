#include<stdio.h>
//Fiyat ve kdv oran� girilen �r�n�n toplam fiyat�n� ekrana yazd�rma
int main()
{
	int fiyat, kdv, satisfiyati;
	printf("urunun maliyetini giriniz\n");
	scanf("%d", &fiyat);
	printf("urunun KDV oranini giriniz\n");
	scanf("%d", &kdv);
	satisfiyati=fiyat+(fiyat*kdv/100);
	printf("urunun satis fiyati: %d", satisfiyati);
	return 0;
}
