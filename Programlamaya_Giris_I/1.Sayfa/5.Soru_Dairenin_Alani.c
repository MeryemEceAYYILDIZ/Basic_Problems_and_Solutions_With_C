#include<stdio.h>
//Yar��ap� verilen dairenin alan�n� hesaplayan algoritmay� yaz�n�z. (pi = 3.14)
#define pi 3.14
int main(){
	float r, alan;
	printf("Dairenin yari capini giriniz\n ");
	scanf("%f", &r);
	alan=pi*r*r;
	printf(" Dairenin alani: %.2f", alan);
	return 0;
}
