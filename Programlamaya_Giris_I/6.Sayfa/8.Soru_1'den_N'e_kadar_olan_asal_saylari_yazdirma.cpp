#include<stdio.h>
//Girilen N deðerine göre 1-N arasýndaki tüm Asal sayýlarý yazdýrýnýz.
int main()
{
	int i, j, n, sayac;
	printf("Hangi sayiya kadar olan asal sayilari yazdirmak istiyorsunuz?\n");
	scanf("%d",&n);
	for(i=2; i<n; i++){
		sayac=0;
		for(j=2; j<i; j++){
			if(i%j==0){
				sayac++;
				break;
			}
		}
		if(sayac==0){
			printf("%d\n", i);
		}
	}
	return 0;
}
