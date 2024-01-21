#include<stdio.h>
//Sayı tahmin oyunu: Programda tanımlanan bir sayıyı kullanıcıdan tahmin etmesini isteyen 
//ve tahmine göre sayının daha küçük veya büyük olduğunu yazıp tekrar tahmin isteyen program
int main()
{
	int x,y=0; //y=deneme sayısı
	do{
		printf("Tahmininizi giriniz\n");
		scanf("%d",&x);
		y++;
		if(x<80){
			printf("Daha buyuk bir deger giriniz\n");
		}
		if(x>80){
			printf("Daha kucuk bir deger giriniz\n");
		}
	}
	while(x!=80);
	printf("Tebikler, sayiyi %d. denemede buldunuz",y);
	return 0;
}
