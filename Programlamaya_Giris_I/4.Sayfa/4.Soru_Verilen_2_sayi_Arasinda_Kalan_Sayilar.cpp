#include<stdio.h>
//Verilen 2 sayý arasýnda kalan sayýlarý yazdýrma
int main()
{
	int a, b, i;
	printf("Hangi sayilarin arasindayi sayilari ekrana yazdirmak istiyorsunuz?\n");
	scanf("%d %d", &a, &b);
	for(i=a+1; i<b; i++){
		printf("%d\n", i);
	}
}
