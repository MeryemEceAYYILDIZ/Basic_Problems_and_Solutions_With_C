#include<stdio.h>
//y= 3x^2 fonksiyonunda verilen x de�erine g�re y de�erini bulunuz. (�rnek: x=2 ise y=12 olmal�d�r.)
int main(){
	int x,y;
	printf("Bir sayi giriniz\n ");
	scanf("%d", &x);
	y=3*(x*x);
	printf("Sonuc: \n %d", y);
	return 0;
}
