#include<stdio.h>
//Girilen sayýnýn Jumbled (komþu rakamlar arasýndaki fark maksimum 1) olup olmadýðýný bulunuz.(12, 45, 656, 3432,... )
int main()
{
	int x, y, z, sayac=0;
	printf("Kontrol etmek istediginiz sayiyi giriniz:\n");
	scanf("%d", &x);
	do{
		y=x%10;
		x=x/10;
		z=x%10;
		printf("x=%d  y=%d  z=%d\n", x, y, z);//Kontrol amaçlý
		if((y-z)!=1 && (y-z)!=-1){
			sayac++;
		}
		printf("sayac=%d\n", sayac);//Kontrol amaçlý
	}while(x/10>0);
	if(sayac>0){
		printf("Jumbled Sayi Deðildir");
	}
	else{
		printf("Jumbled Sayidir");
	}
}
