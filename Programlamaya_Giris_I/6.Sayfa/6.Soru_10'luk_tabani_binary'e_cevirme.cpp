#include<stdio.h>
//Onluk tabanda verilen bir say�y� ikilik tabana �eviren algoritmay� yaz�n�z.
int main()
{
	int x, kalan=0, tersbinary=1, binary=0, sayac=0;//�ift sayilarda islem yaparken kalan 0 olunca islem gecersiz olmasin diye tersBinary'i 1'den baslattim
	printf("Onluk tabanli bir sayi giriniz:\n");
	scanf("%d", &x);
	do{
		kalan=x%2;
		x=x/2;
		tersbinary=tersbinary*10+kalan;
		sayac++;
	}
	while(x>=1);
	printf("tersbinary= %d\n", tersbinary);//Kontrol. Cikan sonucun en basindaki "1" tersBinary'i en basta 1 olarak tan�madigimiz icin
	kalan=0;
	do{
		kalan=tersbinary%10;
		binary=binary*10+kalan;
		tersbinary=tersbinary/10;
		printf("binary adim= %d\n", binary);//Kontrol
		sayac--;
	}
	while(sayac>0);//en bastaki 1'i almamak i�in tersBinary'nin hepsini dahil etmeyerek bir �nceki adimda sonlandiriyoruz
	printf("binary= %d", binary);
}
