#include<stdio.h>
//Klavyeden girilen �� farkl� tam say�n�n toplam�n� sadece 2 de�i�ken kullanarak ger�ekle�tiren program� yazd�rma.
//(De�i�kenler: int toplam, sayi; �eklinde. Ba�ka de�i�ken kullan�lmayacakt�r.)
int main()
{
	int toplam=0,sayi;
	printf("3 tane sayi giriniz:\n");
		scanf("%d",&sayi);		
		toplam=toplam+sayi;
		scanf("%d",&sayi);
		toplam=toplam+sayi;
		scanf("%d",&sayi);
		toplam=toplam+sayi;
	printf("%d",toplam);
}
