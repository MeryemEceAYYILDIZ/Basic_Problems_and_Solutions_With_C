#include<stdio.h>
//0-10 aras� say�lar� bir diziye aktar�p diziyi yazd�rma
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
