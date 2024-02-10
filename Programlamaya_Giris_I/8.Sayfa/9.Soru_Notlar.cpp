#include<stdio.h>
//10 kiþilik bir sýnýfta öðrencilerin bir dersten aldýðý notlar klavyeden girilecektir. 
//Notlar girildikten sonra, sýnýfýn ortalamasýný, sýnýftaki en yüksek ve en düþük notu bulan programý yazýnýz.
int main()
{
	int notlar[10], i, toplam=0, ort, ey, ed;// ey= en yüksek, ed= en düsük
	printf("Ogrencilerin notlarini giriniz:\n");
	for(i=0; i<10; i++){
		printf("%d. ogrencinin notu: ", i+1);
		scanf("%d", &notlar[i]);
	}
	ey=notlar[0];
	ed=notlar[0];
	for(i=0; i<10; i++){
		toplam+=notlar[i];
		if(notlar[i]<ed){
			ed=notlar[i];
		}
		if(notlar[i]>ey){
			ey=notlar[i];
		}
	}
	ort=toplam/10;
	printf("Ortalama: %d\nEn yuksek not: %d\nEn dusuk not: %d", ort, ey, ed);
	return 0;
}
