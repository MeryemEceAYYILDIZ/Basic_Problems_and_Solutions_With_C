#include<stdio.h>
//Kullan�c�dan al�nan boy(metre) ve kilo(kg) bilgisine g�re kilo durumunu de�erlendirip ekrana yazd�r�n�z.
//V�cut kitle endeksi form�l� VK� = kg/(boy*boy) 
//[18,5 alt�nda - Zay�f] --- [18,5 - 24,9 - Normal] --- [25 - 29,9 - Hafif Kilolu] --- [30 - 34,9 - Fazla Kilolu] --- [35 ve �zeri - Obez]
int main()
{
	float boy, kilo, VKI;
	printf("Lutfen boyunuzu metre cinsinden giriniz: ");
	scanf("%f", &boy);
	printf("Lutfen kilonuzu kg cinsinden giriniz: ");
	scanf("%f", &kilo);
	VKI=kilo/(boy*boy);
	if(VKI<18.5){
		printf("Zayif");
	}else if(VKI<25){
		printf("Normal");
	}else if(VKI<30){
		printf("Hafif Kilolu");
	}else if(VKI<35){
		printf("Fazla Kilolu");
	}else{
		printf("Obez");
	}
}


