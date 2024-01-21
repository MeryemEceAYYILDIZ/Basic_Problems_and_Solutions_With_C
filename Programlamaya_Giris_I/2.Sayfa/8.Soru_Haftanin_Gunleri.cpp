#include<stdio.h>
//Haftanýn Günleri: 1-7 arasý girilen deðere göre günleri yazdýrma. if-else, switch-case)
int main()
{
	int gun;
	printf("Haftanin kacinci gunu?\n");
	scanf("%d", &gun);
	switch(gun){
		case (1):{
			printf("Pazartesi");
			break;
		}
		case (2):{
			printf("Sali");
			break;
		}
		case (3):{
			printf("Carsamba");
			break;
		}
		case (4):{
			printf("Persembe");
			break;
		}
		case (5):{
			printf("Cuma");
			break;
		}
		case (6):{
			printf("Cumartesi");
			break;
		}
		case (7):{
			printf("Pazar");
			break;
		}
	}
return 0;
}
