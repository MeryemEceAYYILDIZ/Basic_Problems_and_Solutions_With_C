#include<stdio.h>
//Kullan�c�dan al�nan ismi istendi�i kadar ekrana yazd�ran algoritma
int main()
{
	int N, i;
	char isim[20];
	printf("Isminizi giriniz:\n");
	fgets(isim, 20, stdin); // gets al�nan stringin uzunlu�unu kontrol etmedi�inden fgets kullan�ld�
	printf("Kac defa yazdirmak istediginizi giriniz:\n");
	scanf("%d", &N);
	for(i=0; i<N; i++){
		puts(isim);
	}
	return 0;
}
