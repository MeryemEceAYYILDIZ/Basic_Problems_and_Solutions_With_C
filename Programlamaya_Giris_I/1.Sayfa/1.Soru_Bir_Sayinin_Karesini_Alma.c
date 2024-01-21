#include<stdio.h>
//Kullanýcýdan alýnan bir sayýnýn karesini alma
int main(){
	int x,y;
	printf("Bir sayi giriniz\n ");
	scanf("%d", &x);
	y=x*x;
	printf("Girilen sayinin karesi: \n %d", y);
	return 0;
}
