#include<stdio.h>
//Kullanýcýdan alýnan boy(metre) ve kilo(kg) bilgisine göre kilo durumunu deðerlendirip ekrana yazdýrýnýz.
//Vücut kitle endeksi formülü VKÝ = kg/(boy*boy) 
//[18,5 altýnda - Zayýf] --- [18,5 - 24,9 - Normal] --- [25 - 29,9 - Hafif Kilolu] --- [30 - 34,9 - Fazla Kilolu] --- [35 ve üzeri - Obez]
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


