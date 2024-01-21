#include<stdio.h>
//y= 3x^2 fonksiyonunda verilen x deðerine göre y deðerini bulunuz. (Örnek: x=2 ise y=12 olmalýdýr.)
int main(){
	int x,y;
	printf("Bir sayi giriniz\n ");
	scanf("%d", &x);
	y=3*(x*x);
	printf("Sonuc: \n %d", y);
	return 0;
}
