/*
Bir kiþi her ay sýrasýyla 1, 2, 4, 8, 16, 32, ... 
 TL biriktiriyor. Kullanýcýnýn girdiði bir n liraya 
 kadar para biriktirmesi için kaç ay geçmesi 
 gerekiyor? (Bu kodda "while" ya da "do-while" 
 kullanýlacaktýr.)
		
		Örnek:
		
		Biriktirilecek parayi giriniz: 500
		
		1. Ay Toplam biriken para = 1 TL\\
		2. Ay Toplam biriken para = 3 TL\\
		3. Ay Toplam biriken para = 7 TL\\
		4. Ay Toplam biriken para = 15 TL\\
		5. Ay Toplam biriken para = 31 TL\\
		6. Ay Toplam biriken para = 63 TL\\
		7. Ay Toplam biriken para = 127 TL\\
		8. Ay Toplam biriken para = 255 TL\\
		9. Ay Toplam biriken para = 511 TL

*/
#include<stdio.h>
int main(){
	int bpara,sayac=0;
	printf("Biriktirilecek parayi giriniz: ");
	scanf("%d",&bpara);
	int toplam=0;
	int katsayi=1;
	while(toplam<bpara){
	   	sayac=sayac+1;
		toplam=toplam+katsayi;
		printf("%d. Ay Toplam biriken para = %d TL\n",sayac,toplam);
		katsayi=katsayi*2;
	}
	
	return 0;
}
