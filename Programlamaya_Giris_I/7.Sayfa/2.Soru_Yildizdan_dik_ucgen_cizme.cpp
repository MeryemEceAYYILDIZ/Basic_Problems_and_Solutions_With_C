#include<stdio.h>
//Girilen N degerine gore "*" kullanarak eskenar dik ucgen olusturma
int main()
{
	int i, j, n;
	printf("Dik kenar uzunlugunu giriniz:\n");
	scanf("%d", &n);
	for(i=0; i<=n; i++){
		for(j=0; j<i; j++){
			printf("* ");
		}
		printf("\n");
	}
}
