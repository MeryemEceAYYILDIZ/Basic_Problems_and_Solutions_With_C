#include<stdio.h>
//Girilen say�n�n pozitif ya da negatif oldu�unu ekrana yaz�n�z.
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
