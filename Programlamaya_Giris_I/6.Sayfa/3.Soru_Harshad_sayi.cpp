#include<stdio.h>
//Girilen sayýnýn Harshad (sayýnýn kendisi rakamlarý toplamýna bölünüyor) olup olmadýðýný bulunuz.(1-9, 10, 12, 18, 20, .., 150, 153, …)
int main()
{	
	int x, y, kalan, toplam=0;//y gecici deðiþken
	printf("Kontrol etmek istediginiz sayiyi giriniz:\n");
	scanf("%d", &x);
	y=x;
	do{
		kalan=y%10;
		toplam+=+kalan;
		y=y/10;
	}
	while(y>0);
	if(x%toplam==0){
		printf("%d Harshad Sayidir", x);
	}
	else{
		printf("%d Harshad Sayi Degildir", x);
	}
}
