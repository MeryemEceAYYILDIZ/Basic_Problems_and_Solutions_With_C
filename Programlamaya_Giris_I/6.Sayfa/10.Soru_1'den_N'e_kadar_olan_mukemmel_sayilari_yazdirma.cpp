#include<stdio.h>
//Girilen N de�erine g�re 1-N aras�ndaki t�m M�kemmel say�lar� yazd�r�n�z.(tam b�lenleri toplam� kendisine e�it olan)
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
