#include<stdio.h>
//Klavyeden girilen s�ral� 3 tam say� ile dik ��gen �izilip �izilemeyece�ini g�steren program kodunu yaz�n�z. 
//A^2 + B^2 = C^2 �art�n� sa�lamal�d�r. 
//�rnek: A=3, B=4, C=5 (say�lar s�ral� girilmi�tir) girildi�inde sonuc �D�K ��GEN ��Z�LEB�L�R� yazmal�d�r.
int main ()
{	
	int x, y, z;
	printf("Sirali 3 tam sayi giriniz:\n");
	scanf("%d %d %d", &x, &y, &z);
	if (z*z==(x*x)+(y*y)){
		printf("Dik ucgen cizilebilir");
	}
	else {
		printf("Dik ucgen cizilemez");
	}
return 0;	
}
