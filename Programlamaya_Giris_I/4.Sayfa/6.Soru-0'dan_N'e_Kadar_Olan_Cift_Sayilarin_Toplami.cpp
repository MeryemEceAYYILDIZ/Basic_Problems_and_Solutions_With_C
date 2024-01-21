#include<stdio.h>
//Girilen N deðerine göre 0-N arasý çift sayýlarýn toplamý
int main()
{
	int i, N, toplam=0;
	printf("Hangi sayiya kadar olan cift sayilarin toplamini istiyorsunuz?\n");
	scanf("%d", &N);
	for(i=0; i<=N; i+=2){
		toplam+=i;
	}
	printf("%d\n",toplam);
	return 0;
}
