#include<stdio.h>
//Klavyeden girilen 4 say�dan hangi say�lar�n ortalamadan b�y�k/e�it/k���k oldu�unu bulan program� yaz�n�z. 
//�rnek: 10, 5, 3, 12 Ort: 7.5 => Ortalamadan b�y�k olanlar:10,12 Ortalamadan k���k olanlar: 3, 5 olarak yazacakt�r.

int main()
{
	int dizi[4], oBS=0, oKS=0, oES=0, i; // oBS=ortalamadan b�y�k say�s�, oKS=ortalamadan k���k say�s�, oES=ortalamaya e�it say�s�
	float toplam=0, ort;
	printf("4 tane sayi giriniz\n");
	for(i=0; i<4; i++){
		scanf("%d", &dizi[i]);
		toplam+=dizi[i];
	}
	ort=toplam/4;
	for(i=0; i<4; i++){ //Her birinde ka� tane eleman olaca��n� bulmak i�in.
		if(dizi[i]>ort){
			oBS++;
		}
		else if(dizi[i]<ort){
			oKS++;
		}
		else{
			oES++;
		}		
	}
	int oB[oBS], oK[oKS], oE[oES], ob=0, ok=0, oe=0; // Belirlenen alanlara g�re dizi olu�turuldu
	for(i=0; i<4; i++){
		if(dizi[i]>ort){
			oB[ob++]=dizi[i];
		}
		else if(dizi[i]<ort){
			oK[ok++]=dizi[i];
		}
		else{
			oE[oe++]=dizi[i];
		}		
	}
	printf("Ortalama=%.2f\n", ort);
	printf("Ortalamadan buyuk olanlar: ");
	for(i=0; i<oBS; i++){
		printf("%d, ", oB[i]);	
	}
	printf("Ortalamadan kucuk olanlar: ");
	for(i=0; i<oKS; i++){
		printf("%d, ", oK[i]);	
	}
	printf("Ortalamaya esit olanlar: ");
	for(i=0; i<oES; i++){
		printf("%d, ", oE[i]);	
	}
}
