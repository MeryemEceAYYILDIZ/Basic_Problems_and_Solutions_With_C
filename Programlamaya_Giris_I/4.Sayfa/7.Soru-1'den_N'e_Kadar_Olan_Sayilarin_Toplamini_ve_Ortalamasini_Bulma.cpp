#include<stdio.h>
//Girilen N adet sayýnýn ortalamasýný bulan algoritma
int main()
{
	int N, i;
	float toplam=0, ort;
	printf("kac tane sayi gireceksiniz?\n");
	scanf("%d", &N);
	int sayilar[N];
	for(i=0; i<N; i++){
		printf("Bir sayi giriniz:\n");
		scanf("%d", &sayilar[i]); //istenilen problemde dizi kullanmaya gerek yoktu ancak istenilen zaman eriþmek ve girilen sayýlarý kaybetmemek istedim 
		toplam+=sayilar[i];
	}
	ort=toplam/N;
	printf(" Sayilarin toplami: %.2f\n ortalamasi: %.2f", toplam, ort);
}
