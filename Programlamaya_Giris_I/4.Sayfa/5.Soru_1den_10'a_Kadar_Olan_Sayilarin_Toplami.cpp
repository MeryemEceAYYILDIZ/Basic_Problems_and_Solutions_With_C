#include<stdio.h>
//1�den 10�a kadar olan say�lar�n toplam�
int main()
{
	int i, toplam=0;
	for(i=1; i<11; i++){
		toplam+=+i;
	}
	printf("%d", toplam);
	return 0;
}
