#include<stdio.h>
//�sminizi 5 defa yazd�ran program�n algoritmas�
int main()
{
	int i;
	char isim[20];
	printf("Isminizi giriniz:\n");
	fgets(isim, 20, stdin); // gets al�nan stringin uzunlu�unu kontrol etmedi�inden fgets kullan�ld�
	for(i=0; i<5; i++){
		puts(isim);
	}
	return 0;
}
