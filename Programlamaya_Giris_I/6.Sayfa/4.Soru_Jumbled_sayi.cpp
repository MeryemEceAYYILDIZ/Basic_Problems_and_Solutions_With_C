#include<stdio.h>
//Girilen say�n�n Jumbled (kom�u rakamlar aras�ndaki fark maksimum 1) olup olmad���n� bulunuz.(12, 45, 656, 3432,... )
int main()
{
	int x, y, z, sayac=0;
	printf("Kontrol etmek istediginiz sayiyi giriniz:\n");
	scanf("%d", &x);
	do{
		y=x%10;
		x=x/10;
		z=x%10;
		printf("x=%d  y=%d  z=%d\n", x, y, z);//Kontrol ama�l�
		if((y-z)!=1 && (y-z)!=-1){
			sayac++;
		}
		printf("sayac=%d\n", sayac);//Kontrol ama�l�
	}while(x/10>0);
	if(sayac>0){
		printf("Jumbled Sayi De�ildir");
	}
	else{
		printf("Jumbled Sayidir");
	}
}
