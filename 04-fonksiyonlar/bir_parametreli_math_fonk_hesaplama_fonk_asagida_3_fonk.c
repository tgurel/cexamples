/*
kullanici tek parametreli bir fonksiyonda parametre
degeri girerek sonucunu gormek istiyor.
veri alma ve sonucu yazdirma fonksiyon ile yaptirilarak
main icindeki karmasiklik azaltiliyor.
*/
#include<stdio.h>
#include<math.h>

// prototip
double hesapla(double);
double veriAl(void);
void sonucYazdir(double);

int main(){
	double x,y,i;
	
	for(i=1;i<=5;i++){
		x=veriAl();
		y=hesapla(x);
		sonucYazdir(y);
	}
	return 0;
}

double hesapla(double x2){
	return (sin(x2)*cos(x2)+sqrt(3*x2))/(8*x2-8);
}
double veriAl(){
	double deger;
	printf("x degerini giriniz :");
	scanf("%lf",&deger);
	return deger;
}
void sonucYazdir(double a){
	printf("Sonuc = %f\n",a);
}





