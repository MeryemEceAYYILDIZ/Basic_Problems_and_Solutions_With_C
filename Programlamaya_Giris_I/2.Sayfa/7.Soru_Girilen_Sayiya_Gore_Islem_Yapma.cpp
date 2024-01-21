#include<stdio.h>
//Dört iþlem: 1:Toplama, 2:Çýkarma,3:Çarpma 4:Bölme. 
//Kullanýcýdan iki sayý alýp iþlemi seçerek sonucu ekranda yazýnýz?(if-else, switch-case)
int main()
{
	int x, y, islem, sonuc;
	printf("2 sayi giriniz:\n");
	scanf("%d\n%d", &x, &y);
	printf("Yapmak istediginiz islemin numarasýný giriniz:\n1: toplama\n2: cikarma\n3: carpma\n4: bolme\n");
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
