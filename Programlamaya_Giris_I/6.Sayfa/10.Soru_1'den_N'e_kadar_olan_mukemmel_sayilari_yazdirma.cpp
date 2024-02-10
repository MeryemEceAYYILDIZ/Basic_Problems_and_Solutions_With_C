#include<stdio.h>
//Girilen N deðerine göre 1-N arasýndaki tüm Mükemmel sayýlarý yazdýrýnýz.(tam bölenleri toplamý kendisine eþit olan)
int main()
{
	int toplam, n, i, j;
	printf("Hangi sayiya kadar mukemmel sayilari yazdirmak istiyorsunuz?\n");
	scanf("%d", &n);
	for(j=1; j<n; j++){
		toplam=0;
		for(i=1; i<j; i++){
			if(j%i==0){
				toplam+=i;
			}
		}
		if(toplam==j){
			printf("%d\n", j);
		}
	}
	return 0;
}
