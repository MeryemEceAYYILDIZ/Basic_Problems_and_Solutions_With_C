#include<stdio.h>
//Fibonacci serisini dizi kullanarak oluþturunuz.
int main()
{
	int i, N;
	printf("Kac tane eleman yazdirmak istiyorsunuz?\n");
	scanf("%d", &N);
	int dizi[N];
	dizi[0]=0;
	dizi[1]=1;
	for(i=2; i<N; i++){
		dizi[i]=dizi[i-1]+dizi[i-2];
	}
	for(i=0; i<N; i++){
		printf("%d ", dizi[i]);
	}
	return 0;
}
