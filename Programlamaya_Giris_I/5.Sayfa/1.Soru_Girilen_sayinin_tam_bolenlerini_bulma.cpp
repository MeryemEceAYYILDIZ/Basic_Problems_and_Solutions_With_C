#include<stdio.h>
//Verilen bir say�n�n tam b�lenlerini bulan algoritma
int main()
{
	int x,i;
	printf("Tam bolenlerini bulmak istediginiz sayiyi giriniz:\n");
	scanf("%d", &x);
	printf("Sayinin tam bolenleri:\n");	
	for(i=1; i<x+i; i++){
		if(x%i==0){
		printf("%d\n",i);
		}
	}
return 1;
}
