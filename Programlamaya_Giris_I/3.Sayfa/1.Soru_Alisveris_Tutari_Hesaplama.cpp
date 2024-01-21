#include<stdio.h>
//Bir alýþveriþ sitesinde 100 TL ve üzerine kargo bedava iken 100 TL altýndaki alýþveriþlerde ise 20 TL kargo ücreti alýnmaktadýr. 
//Buna göre kullanýcýdan alýþveriþ tutarýný alýp, kargo ücreti dahil ödemesi gereken toplam tutarýný ekrana yazdýrýnýz.
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
