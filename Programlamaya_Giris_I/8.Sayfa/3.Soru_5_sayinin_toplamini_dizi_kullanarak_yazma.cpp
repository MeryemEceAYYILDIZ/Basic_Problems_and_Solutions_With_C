#include<stdio.h>
//Girilen 5 say�y� bir diziye aktard�ktan sonra ayr� bir d�ng�de dizi elemanlar�n� yazd�r�p toplamlar�n� hesaplay�n�z.
int main()
{
	int i, toplam=0, dizi[5];
	printf("5 sayi giriniz:\n");
	for(i=0; i<5; i++){
		scanf("%d", &dizi[i]);
	}
	for(i=0; i<5; i++){
		toplam+=dizi[i];
		printf("%d\n", dizi[i]);
	}
	printf("toplam: %d", toplam);
	return 0;
}
