#include<stdio.h>
//Bir tamsay� dizisini tersten yazd�r�n�z.
int main()
{
	int N, i, j;
	printf("Kac tam sayi gireceksiniz?\n");
	scanf("%d", &N);
	int dizi[N];
	printf("%d adet tam sayi giriniz\n", N);
	for(i=0; i<N; i++){
		scanf("%d", &dizi[i]);
	}
	for(j=N-1; j>=0; j--){
		printf("%d\n", dizi[j]);
	}
	return 0;	
}
