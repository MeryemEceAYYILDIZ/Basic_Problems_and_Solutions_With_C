#include<stdio.h>
//Klavyeden girilen üç farklý tam sayýnýn toplamýný sadece 2 deðiþken kullanarak gerçekleþtiren programý yazdýrma.
//(Deðiþkenler: int toplam, sayi; þeklinde. Baþka deðiþken kullanýlmayacaktýr.)
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
