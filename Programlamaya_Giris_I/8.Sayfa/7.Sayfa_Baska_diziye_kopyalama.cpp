#include<stdio.h>
//Bir dizinin elemanlar�n� ba�ka bir diziye kopyalay�p yazd�r�n�z.
int main()
{
	int N, i;
	printf("Kac tam sayi gireceksiniz?\n");
	scanf("%d", &N);
	int dizi[N], dizi2[N];
	printf("%d adet tam sayi giriniz\n", N);
	for(i=0; i<N; i++){
		scanf("%d", &dizi[i]);
	}
	for(i=0; i<N; i++){
		dizi2[i]=dizi[i];
		printf("%d ", dizi2[i]);
	}
	return 0;
}
