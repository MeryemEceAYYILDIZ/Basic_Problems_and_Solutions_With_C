#include<stdio.h>
//0-10 arasý sayýlarý bir diziye aktarýp diziyi yazdýrma
int main ()
{
	int i, dizi[10];
	for(i=0; i<10; i++){
		dizi[i]=i+1;
	}	
	for(i=0; i<10; i++){
		printf("%d\n", dizi[i]);
	}	
}
