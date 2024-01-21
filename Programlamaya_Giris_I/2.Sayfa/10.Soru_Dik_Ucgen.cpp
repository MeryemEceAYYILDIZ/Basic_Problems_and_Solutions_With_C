#include<stdio.h>
//Klavyeden girilen sýralý 3 tam sayý ile dik üçgen çizilip çizilemeyeceðini gösteren program kodunu yazýnýz. 
//A^2 + B^2 = C^2 þartýný saðlamalýdýr. 
//Örnek: A=3, B=4, C=5 (sayýlar sýralý girilmiþtir) girildiðinde sonuc “DÝK ÜÇGEN ÇÝZÝLEBÝLÝR” yazmalýdýr.
int main ()
{	
	int x, y, z;
	printf("Sirali 3 tam sayi giriniz:\n");
	scanf("%d %d %d", &x, &y, &z);
	if (z*z==(x*x)+(y*y)){
		printf("Dik ucgen cizilebilir");
	}
	else {
		printf("Dik ucgen cizilemez");
	}
return 0;	
}
