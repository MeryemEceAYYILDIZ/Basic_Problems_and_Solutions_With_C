#include<stdio.h>
//Girilen n adet sayý içerisinden pozitif, negatif ve sýfýr sayýsýnýn kaçar adet tekrarlandýðýný bulunuz.
int main()
{
	int x,a=0,b=0,c=0,N,i;
	printf("Kac tane sayi gireceginizi giriniz:\n");
	scanf("%d",&N);
	printf("%d sayi giriniz:\n",N);
	for(i=1; i<N+1; i++){
		scanf("%d",&x);
		if(x<0){
		a=a+1;
		}
		if(x>0){
			b=b+1;
		}
		if(x==0){
			c=c+1;
		}
	}
	printf(" %d tane pozitif\n %d tane negatif\n %d tane sifir girildi.", b, a, c);
}
