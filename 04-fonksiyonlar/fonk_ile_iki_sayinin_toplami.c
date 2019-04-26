/*
kullanicidan a ve b tam sayilari alip bu iki sayinin
toplamini bir fonksiyon içinde toplayip sonucu "main" 
içinde yazdýran kod
fonksiyon main'in altina yazilirsa fonksiyonlardan once
"prototip" tanimlamak gerekiyor..
*/
#include<stdio.h>
#include<math.h>

// prototip
int topla(int,int);


int main(){
	int a,b,sonuc;
	printf("a ve b degerlerini giriniz :");
	scanf("%d%d",&a,&b);
	sonuc=topla(a,b);
	printf("Sonuc = %d",sonuc);
	
	return 0;
}

int topla(int x, int y){
	return x + y;
}



