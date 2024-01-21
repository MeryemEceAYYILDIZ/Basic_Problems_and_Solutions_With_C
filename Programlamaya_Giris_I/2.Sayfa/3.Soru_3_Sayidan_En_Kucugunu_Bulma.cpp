#include<stdio.h>
//Klavyeden girilen 3 sayý içerisinden en küçük sayýyý bulan algoritma
int main ()
{
	int x, y, z, ek;   //ek=en küçük
	printf("3 tane sayi giriniz:\n");
	scanf("%d\n%d\n%d", &x, &y, &z);
	ek=x;
	if(y<x){
		if(y<z){
			ek=y;
		}
		else{
			ek=z;
		}
	}
	else if(z<x){
			ek=z;
	}
	else{
		ek=x;
	}
	printf("en kucuk sayi= %d", ek);
return 0;
}
