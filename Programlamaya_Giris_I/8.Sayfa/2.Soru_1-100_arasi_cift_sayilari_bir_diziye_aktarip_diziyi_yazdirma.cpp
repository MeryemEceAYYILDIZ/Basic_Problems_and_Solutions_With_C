#include<stdio.h>
//1-100 aras� �ift say�lar� bir diziye aktar�p dizi elemanlar�n� yazd�r
int main ()
{
	int i, a=0, dizi[51];
	for(i=0; i<=100; i++){
		if((i)%2==0){
			dizi[a]=i;
			a++;	
		}
	}	
	for(i=0; i<51; i++){
		printf("%d\n", dizi[i]);
	}	
}
