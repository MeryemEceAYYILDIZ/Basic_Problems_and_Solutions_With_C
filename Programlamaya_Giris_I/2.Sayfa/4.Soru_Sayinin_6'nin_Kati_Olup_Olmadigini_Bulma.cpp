#include<stdio.h>
//Girilen say�n�n 6'n�n kat� olup olmad���n� bulan algoritma
int main()
{
	int x;
	printf("Bir sayi giriniz:\n");
	scanf("%d", &x);
	if(x%6==0){
		printf("6'nin katidir");
	}
	else{
		printf("6'nin kati degildir");
	}
return 0;
}
