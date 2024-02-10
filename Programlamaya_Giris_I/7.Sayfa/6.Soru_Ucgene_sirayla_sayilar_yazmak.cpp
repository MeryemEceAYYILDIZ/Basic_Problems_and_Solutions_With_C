#include<stdio.h>
int main()
{
	int i, j, sayac=1, x;
	printf("Kac satir olsun?\n");
	scanf("%d", &x);
	for(i=0; i<=x; i++){
		for(j=0; j<i; j++){
			printf("%d ", sayac);
			sayac+=1;
		}
		printf("\n");
	}
}
