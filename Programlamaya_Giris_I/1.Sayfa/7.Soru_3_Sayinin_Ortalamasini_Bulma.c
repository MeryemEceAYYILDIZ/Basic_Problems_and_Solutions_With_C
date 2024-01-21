#include<stdio.h>
//Verilen 3 sayýnýn ortalamasýný bulma
int main()
{
	float x,y,z,ort;
	printf("3 tane tam sayi giriniz\n");
	scanf("%f %f %f",&x,&y,&z);
	ort=(x+y+z)/3;
	printf("%.f,%.f ve %.f Sayilarin ortalamasi:%.2f \n",x,y,z,ort);
	return 0;
} 
