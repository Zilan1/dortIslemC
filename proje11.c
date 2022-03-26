#include <stdio.h>
#include <stdlib.h>

int main() {

	int sayi1,sayi2,toplam,fark,carpim,bolum;
	
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&sayi1);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carpim=sayi1*sayi2;
	bolum=sayi1/sayi2;
	
	printf("Toplam: %d\n",toplam);
	printf("Fark: %d\n",fark);
	printf("Carpim: %d\n",carpim);
	printf("Bolum: %d\n",bolum);
	

	
	int kenar, alan,cevre;
	
	printf("Kenar uzunlugunu giriniz: ");
	scanf("%d",&kenar);
	
	alan=kenar*kenar;
	cevre=kenar*4;
	
	printf("Karenin Alani: %d\n",alan);
	printf("Karenin Alani: %d",cevre);
	
     return 0;

}
