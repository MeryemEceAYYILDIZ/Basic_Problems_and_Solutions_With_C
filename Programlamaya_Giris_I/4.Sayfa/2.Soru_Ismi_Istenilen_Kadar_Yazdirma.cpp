#include<stdio.h>
//Kullanýcýdan alýnan ismi istendiði kadar ekrana yazdýran algoritma
int main()
{
	int N, i;
	char isim[20];
	printf("Isminizi giriniz:\n");
	fgets(isim, 20, stdin); // gets alýnan stringin uzunluðunu kontrol etmediðinden fgets kullanýldý
	printf("Kac defa yazdirmak istediginizi giriniz:\n");
	scanf("%d", &N);
	for(i=0; i<N; i++){
		puts(isim);
	}
	return 0;
}
