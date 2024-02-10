#include<stdio.h>
//Girilen 5 sayýyý bir diziye aktardýktan sonra ayrý bir döngüde dizi elemanlarýný yazdýrýp toplamlarýný hesaplayýnýz.
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
