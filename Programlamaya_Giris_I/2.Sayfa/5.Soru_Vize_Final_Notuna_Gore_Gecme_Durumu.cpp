#include<stdio.h>
//Vize ve final notuna göre geçme durumunu hesaplayan algoritma(Not=Vize*0,4+Final*0,6) Geçme Notu:55
int main ()
{
	int vize, final, ysn; //ysn=yýl sonu notu
	printf("Vize notunu giriniz:\n");
	scanf("%d", &vize);
	printf("Final notunu giriniz:\n");
	scanf("%d", &final);
	ysn=vize*4/10+final*6/10;
	if(ysn>=55){
		printf("Gecti");
	}
	else{
		printf("Kaldi");
	}
	return 0;
}
