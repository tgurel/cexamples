/*
kullanicinin girdigi bir m tam sayisina kadar olan sayilarin
asal olup olmadigini fonksiyon icerisinde bulunuz...
*/
#include<stdio.h>
#include<math.h>

// prototip
int asalKontrol(int);


int main(){
	int i,m,sonuc;
	printf("m degerini giriniz :");
	scanf("%d",&m);
	
	for(i=2;i<=m;i++){
		if(asalKontrol(i)==1){
			printf("%d asaldir\n",i);
		}
		else{
			printf("%d asal degildir\n",i);
		}
	}
	return 0;
}

// int degeri alir. bu deger asal ise 1 dondurur
// asal degil ise 0 dondurur..
int asalKontrol(int n){
	int i,asalmi=1;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			asalmi=0;
			break;
		}
	}
	return asalmi;
}



