/*
Kullanýcý tarafýndan girilen 500 sayýdan ilk 40 ve son 40 tanesinin 
toplamýnýn tüm 500 sayýnýn toplamýna oranýný bulan C kodunu 
"for" döngüsü kullanarak yazýnýz.
*/
#include<stdio.h>
int main(){
	int i,sayi,t80=0,t500=0;
	double sonuc;
	for(i=1;i<=500;i++){
		printf("Bir tam sayi giriniz :");
		scanf("%d",&sayi);		
		t500 = t500 + sayi;
		if(i<=40 || i>=461){
			t80 = t80 + sayi;
		}
	}
	sonuc=1.0*t80/t500;
	printf("Sonuc = %f",sonuc);
	return 0;
}
