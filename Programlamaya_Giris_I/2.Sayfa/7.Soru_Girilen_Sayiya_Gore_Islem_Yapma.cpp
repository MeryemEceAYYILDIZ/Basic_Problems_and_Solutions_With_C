#include<stdio.h>
//D�rt i�lem: 1:Toplama, 2:��karma,3:�arpma 4:B�lme. 
//Kullan�c�dan iki say� al�p i�lemi se�erek sonucu ekranda yaz�n�z?(if-else, switch-case)
int main()
{
	int x, y, islem, sonuc;
	printf("2 sayi giriniz:\n");
	scanf("%d\n%d", &x, &y);
	printf("Yapmak istediginiz islemin numaras�n� giriniz:\n1: toplama\n2: cikarma\n3: carpma\n4: bolme\n");
	scanf("%d", &islem);
	switch(islem){
		case (1):{
			sonuc=x+y;
			break;
		}
		case (2):{
			sonuc=x-y;
			break;
		}
		case (3):{
			sonuc=x*y;
			break;
		}
		case (4):{
			sonuc=x/y;
			break;
		}
		default :
		printf("Hatali giris yapildi");
	}
	printf("%d", sonuc);
return 0;
}
