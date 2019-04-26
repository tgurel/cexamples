/*
kullanici tek parametreli bir fonksiyonda parametre
degeri girerek sonucunu gormek istiyor.
*/
#include<stdio.h>
#include<math.h>

double f(double z){
	double sonuc = (sin(z)*cos(z)+sqrt(3*z))/(8*z-8);
	return sonuc;
}

int main(){
	double x,y;
	printf("x degerini giriniz :");
	scanf("%lf",&x);
	y=f(x);
	printf("Sonuc = %f\n",y);
	return 0;
}
