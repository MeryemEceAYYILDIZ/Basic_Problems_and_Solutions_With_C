#include<stdio.h>
//Ýsminizi 5 defa yazdýran programýn algoritmasý
int main()
{
	int i;
	char isim[20];
	printf("Isminizi giriniz:\n");
	fgets(isim, 20, stdin); // gets alýnan stringin uzunluðunu kontrol etmediðinden fgets kullanýldý
	for(i=0; i<5; i++){
		puts(isim);
	}
	return 0;
}
