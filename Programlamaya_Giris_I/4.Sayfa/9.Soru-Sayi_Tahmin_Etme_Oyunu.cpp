#include<stdio.h>
//Say� tahmin oyunu: Programda tan�mlanan bir say�y� kullan�c�dan tahmin etmesini isteyen 
//ve tahmine g�re say�n�n daha k���k veya b�y�k oldu�unu yaz�p tekrar tahmin isteyen program
int main()
{
	int x,y=0; //y=deneme say�s�
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
