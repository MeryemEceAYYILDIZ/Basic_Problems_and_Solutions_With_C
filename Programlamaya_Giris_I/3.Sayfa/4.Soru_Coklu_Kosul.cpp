#include<stdio.h>
//Kullan�c�dan al�nan say�n�n tek veya �ift say� oldu�unu, ayr�ca tek ise 3�e tam b�l�n�p b�l�nmedi�ini, 
//�ift ise 6�ya tam b�l�n�p b�l�nmedi�ini yazd�ran program� yaz�n�z.
//(�rne�in; 33 girildi�inde �Tek sayi ve 3�e bolunebilir�, 10 girildi�inde �Cift sayi ve 6�ya bolunemez�)
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
