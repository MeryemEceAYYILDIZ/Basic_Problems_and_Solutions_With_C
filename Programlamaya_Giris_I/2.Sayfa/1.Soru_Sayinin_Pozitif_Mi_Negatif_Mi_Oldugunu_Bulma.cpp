#include<stdio.h>
//Girilen sayýnýn pozitif ya da negatif olduðunu ekrana yazýnýz.
int main ()
{
	int x;
	printf("Bir sayi giriniz:\n");
	scanf("%d", &x);
	if(x>0){
		printf("%d pozitif sayidir", x);
	}
	else if(x<0){
		printf("%d negatif sayidir", x);
	}
	else{
		printf("%d sifirdir", x);
	}
return 0;
}
