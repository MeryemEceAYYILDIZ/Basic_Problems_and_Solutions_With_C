#include<stdio.h>
//Kullanýcýdan alýnan sayýnýn tek veya çift sayý olduðunu, ayrýca tek ise 3’e tam bölünüp bölünmediðini, 
//çift ise 6’ya tam bölünüp bölünmediðini yazdýran programý yazýnýz.
//(örneðin; 33 girildiðinde “Tek sayi ve 3’e bolunebilir”, 10 girildiðinde “Cift sayi ve 6’ya bolunemez”)
int main()
{
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	if(sayi%2==0){
		printf("Girilen sayi cifttir ");
		if(sayi%6==0){
			printf("ve 6\'ya tam bolunur.");
		}else{
			printf("ancak 6\'ya tam bolunmez.");
		}
	}else{
		printf("Girilen sayi tektir ");
		if(sayi%3==0){
			printf("ve 3\'e tam bolunur.");
		}else{
			printf("ancak 3\'e tam bolunmez.");
		}
	}
}
