/*
Kullanýcýdan bir ürünün alýþ fiyatýný(af) ve satýþ fiyatýný(sf) isteyen 
ve aþaðýdaki iþlemleri yapan TEK bir kod yazýn (fiyatlar gerçel 
sayý olarak alýnacaktýr).
-Bu iþlemde zarar mý yoksa kar mý edildiði ekrana yazýlsýn.
-Zarar ya da kar iþleminin yüzde kaç olarak gerçekleþtiði ekrana 
yazdýrýlsýn (Eðer kar/zarar oraný \%0 ise kar olarak sayýlacaktýr).

Örnek: 

Alis fiyatini giriniz : 8
Satis fiyatini giriniz : 6
Zarar edilmistir. Zarar orani yuzde -25.000000 'dir.

*/

#include<stdio.h>
#include<math.h>
int main(){
	double af,sf,sonuc;
	printf("alis fiyatini giriniz :");
	scanf("%lf",&af);
	printf("satis fiyatini giriniz :");
	scanf("%lf",&sf);
	
	sonuc = 100*(sf-af)/af;
	if (sonuc>=0){
		printf("kar edilmistir\n");
		printf("kar orani yuzde %f kadar olmustur..",sonuc);
	}
	else{
		printf("zarar edilmistir\n");
		printf("zarar orani yuzde %f kadar olmustur..",sonuc);
	}
	
	return 0;
}
