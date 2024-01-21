#include<stdio.h>
int main()
{
	float birinciSayi, ikinciSayi, sonuc;
	int islem;
	do{
		printf("islem yapmak istediginiz iki sayiyi giriniz:\n");
		scanf("%f\n%f",&birinciSayi,&ikinciSayi);
		printf("Yapmak istediginiz islemi seciniz:\n1:toplama\n2:cikarma\n3:carpma\n4:bolme\n0:cikis\n");
		scanf("%d",&islem);	
		switch(islem){
			case 1:
				sonuc=birinciSayi+ikinciSayi;
				break;
			case 2:
				sonuc=birinciSayi-ikinciSayi;
				break;
			case 3:
				sonuc=birinciSayi*ikinciSayi;
				break;
			case 4:
				sonuc=birinciSayi/ikinciSayi;
				break;
			case 0:
				break;
			default:
				printf("Hatali giris yaptiniz!\n");
				break;
		}	
	printf("%.2f\n", sonuc);
	}
	while(islem!=0);
	return 0;
}
