#include<stdio.h>
//Girilen N degerine gore "*" kullanarak nxn'lik bir kare cizme
int main()
{
	int i, j, n;
	printf("Karenin uzunlugunu giriniz:\n");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("* ");
		}
		printf("\n");
	}
}
