#include<stdio.h>
//Kullan�c�dan al�nan N adet say�dan en b�y�k ve en k���k olan� bulunuz
int main()
{
	int i, j, eb, ek, N; //eb:en b�y�k, ek:en k���k
	printf("Kac sayi gireceksiniz?:\n");
	scanf("%d", &N);
	int dizi[N];
	printf("%d sayi giriniz:\n", N);
	for(i=0; i<N; i++){
		scanf("%d", &dizi[i]);
	}
	eb=dizi[0];
	ek=dizi[0];
	for(j=0; j<N; j++){
		if(dizi[j]>eb){
			eb=dizi[j];
		}
		if(dizi[j]<ek){
			ek=dizi[j];
		}
	}
	printf("En buyuk sayi: %d\nEn kucuk sayi: %d", eb, ek);
	return 0;	
}
