#include<stdio.h>
//Girilen n deðerine göre Fibonacci serisinin ( 0 1 1 2 3 5 8 … ) ilk n terimini hesaplayýnýz
int main()
{
	int n,i,birOnce=1,ikiOnce=0, sayi=1;
	printf("Kacinci terime kadar istiyorsunuz?\n");
	scanf("%d",&n);
	printf("%d ",sayi);
	for(i=1; i<n+1; i++){
		sayi=birOnce+ikiOnce;
		printf("%d",sayi);
		ikiOnce=birOnce;
		birOnce=sayi;
		printf(" ");
	}	
return 0;
}
