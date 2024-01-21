#include<stdio.h>
//A ve B tamsayý deðiþkenlerinin deðerlerini yer deðiþtiren algoritma
int main()
{
	int A,B,C=0;
	printf("A sayisini giriniz:\n");
	scanf(" %d", &A);
	printf("B sayisini giriniz:\n");
	scanf(" %d", &B);
	C=A;
	A=B;
	B=C;
	printf("A: %d\nB: %d",A,B);
}
