#include<stdio.h>
//Girilen N de�erine g�re 1-N aras�ndaki t�m Asal say�lar� yazd�r�n�z.
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
