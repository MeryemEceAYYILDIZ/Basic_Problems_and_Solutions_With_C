#include<stdio.h>
//Girilen g�n say�s�n� Y�l, Hafta ve G�n�e �evirerek yazd�rma
int main ()
{
	int gun, hafta, yil;
	printf("Gun sayisini giriniz:\n");
	scanf("%d", &gun);
	yil=gun/360;
	hafta=(gun%360)/7;
	gun=(gun%360)%7;
	printf("%d yil %d hafta %d gun", yil, hafta, gun);
	return 0;
}
