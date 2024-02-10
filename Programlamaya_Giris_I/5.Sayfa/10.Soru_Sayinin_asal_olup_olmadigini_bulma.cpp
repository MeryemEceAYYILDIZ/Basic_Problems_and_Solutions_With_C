#include<stdio.h>
//Girilen bir sayýnýn Asal Sayý olup olmadýðýný bulunuz.
int main()
{
	int x,i,a=0;
	printf("Bir sayi giriniz:\n");
	scanf("%d",&x);
	for(i=2; i<=x/2; i++){
		if(x%i==0){
			a=a+1;
			break;
		}
	}
	if(a>=1){
		printf("%d asal sayi degildir", x);
	}
	else{
		printf("%d asal sayidir", x);
	}
return 0;
}
