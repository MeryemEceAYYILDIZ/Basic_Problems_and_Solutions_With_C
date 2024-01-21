#include<stdio.h>
//Girilen sayýnýn mutlak deðerini alan algoritma
int main ()
{
	int x;
	printf("Bir sayi giriniz:\n");
	scanf("%d", &x);
	if(x>=0){
		printf("|%d|=%d", x, x);
	}
	else{
		printf("|%d|=%d", x, -x);
	}
}
