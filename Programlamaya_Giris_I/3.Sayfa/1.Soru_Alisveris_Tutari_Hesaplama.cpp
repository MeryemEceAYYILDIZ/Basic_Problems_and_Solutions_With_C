#include<stdio.h>
//Bir al��veri� sitesinde 100 TL ve �zerine kargo bedava iken 100 TL alt�ndaki al��veri�lerde ise 20 TL kargo �creti al�nmaktad�r. 
//Buna g�re kullan�c�dan al��veri� tutar�n� al�p, kargo �creti dahil �demesi gereken toplam tutar�n� ekrana yazd�r�n�z.
int main()
{
	int tutar, odenecekTutar;
	printf("Alisveris tutarini giriniz: ");
	scanf("%d", &tutar);
	if(tutar<100){
		odenecekTutar=tutar+20;
		printf("Kargo ucreti 20 TL!\n");
	}
	else{
		odenecekTutar=tutar;
		printf("Kargo ucreti 0 TL!\n");
	}
	printf("Odenecek tutar: %d", odenecekTutar);
}
