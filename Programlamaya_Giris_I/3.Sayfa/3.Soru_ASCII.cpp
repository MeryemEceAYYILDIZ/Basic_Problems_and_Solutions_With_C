#include<stdio.h>
//Kullan�c�dan bir karakter giri�i alan ve bu karakterin bir harf, rakam veya �zel bir karakter oldu�unu belirleyen bir program yaz�n. 
//(ASCII tablosunu kullanarak)
int main()
{
	char x;
	printf("Lutfen klavyeden bir giris yapiniz: ");
	scanf("%c", &x);
	if((x<=90 && x>=65) || (x>=97 && x<=122)){
		printf("Girilen veri bir harftir!");
	}
	else if(x<=57 && x>=48){
		printf("Girilen veri bir rakamdir!");
	}
	else{
		printf("Girilen veri bir ozel karakterdir!");
	}
}
