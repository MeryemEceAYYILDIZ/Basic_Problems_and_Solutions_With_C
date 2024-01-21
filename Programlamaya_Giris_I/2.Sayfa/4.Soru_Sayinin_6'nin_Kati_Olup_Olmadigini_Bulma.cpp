#include<stdio.h>
//Girilen sayýnýn 6'nýn katý olup olmadýðýný bulan algoritma
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
