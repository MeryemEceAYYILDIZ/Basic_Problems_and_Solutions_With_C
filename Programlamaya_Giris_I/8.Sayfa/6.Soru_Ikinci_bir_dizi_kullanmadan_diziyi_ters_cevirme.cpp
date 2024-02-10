#include<stdio.h>
//Bir tamsayý dizisini ters çeviriniz(baþka bir dizi kullanmadan)
int main()
{
	int N, i, j, c;
	printf("Kac tam sayi gireceksiniz?\n");
	scanf("%d", &N);
	int dizi[N];
	printf("%d adet tam sayi giriniz\n", N);
	for(i=0; i<N; i++){
		scanf("%d", &dizi[i]);
	}
	for(j=0; j<N/2; j++){
		c=dizi[j];
		dizi[j]=dizi[N-j-1];
		dizi[N-j-1]=c;
	}
	for(j=0; j<N; j++){
		printf("%d\n", dizi[j]);
	}
	return 0;	
}
