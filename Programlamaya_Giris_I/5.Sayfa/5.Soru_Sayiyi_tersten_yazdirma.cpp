#include<stdio.h>
//Girilen sayýyý tersten yazdýran(tamsayý olarak) program(245 => 542).
int main()
{
	int x, kalan, temp, basamakSayisi=1;
	printf("Tersten yazdirmak istediginiz sayiyi giriniz:\n");
	scanf("%d", &x);
	temp=x;
	x=0;
	do{
		kalan=temp%10;
		x=x*10+kalan;
		temp=temp/10;
	}
	while(temp>0);
	printf("%d", x);
return 0;	
}
