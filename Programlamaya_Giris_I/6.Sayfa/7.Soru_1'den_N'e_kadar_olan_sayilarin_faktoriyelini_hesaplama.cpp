#include<stdio.h>
//Girilen N deðerine göre 1-N arasýndaki tüm sayýlarýn faktöriyelini bulan programý yazýnýz.(Ekran çýktýsý: 1!=1, 2!=2, 3!=6…)
int main()
{
	int N,i,j,f=1; //f=faktöriyel
	printf("Hangi sayiya kadar faktoriyelleri hesaplamak istiyorsunuz?\n");
	scanf("%d", &N);
	for(i=1; i<N+1; i++){
		for(j=1; j<i+1; j++){
			f*=+j;
		}
		printf("%d!: %d\n", i, f);
		f=1;
	}
}
