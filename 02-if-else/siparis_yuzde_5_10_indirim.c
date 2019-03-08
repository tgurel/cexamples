/*
Kullanýcýdan bir ürünün sipariþ adedini(sa) ve birim fiyatýný(bf) 
isteyen ve aþaðýdaki iþlemleri yapan TEK bir kod yazýn (fiyatlar 
gerçel sayý olarak alýnacaktýr).
-Sipariþin toplam tutarý, "Liste Fiyatý" olarak ekrana yazýlsýn.
-Eðer toplam tutar 100 liranýn altýnda ise \%5, 100 ve 100 
liranýn üstünde ise \%10 indirim uygulanacak olup indirimli 
toplam tutar ekrana yazdýrýlacaktýr.
	
Örnek: 
Siparis adedini giriniz : 5
Birim fiyatini giriniz : 8
Liste Fiyatý : 40.000000
%5 indirimli fiyat: 38.000000
*/

#include<stdio.h>
#include<math.h>
int main(){
	double sa,bf,listefiyati,indirim5,indirim10;
	printf("siparis adedini giriniz :");
	scanf("%lf",&sa);
	printf("birim adedini giriniz :");
	scanf("%lf",&bf);
	
	listefiyati = sa*bf;
	indirim5=listefiyati*0.95;
	indirim10=listefiyati*0.9;
	
	printf("Liste fiyati = %f\n",listefiyati);
	
	if (listefiyati<100){
		printf("yuzde 5 indirimli fiyat = %f",indirim5);
	}
	else{
		printf("yuzde 10 indirimli fiyat = %f",indirim10);
	}
	
	return 0;
}
