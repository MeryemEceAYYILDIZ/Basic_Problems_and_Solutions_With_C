#include<stdio.h>
//Girilen sayýnýn faktöriyelini hesaplayan program
int main()
{
	int x,i,f=1;
	do{
	printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz:\n");
	scanf("%d",&x);
	for(i=1; i<=x; i++){
		f*=+i;
	}
	printf("%d\n",f);
	f=1;
	printf("Donguden cikmak icin 0'a basiniz\n");
	}
	while(x>0);
return 0;
}
