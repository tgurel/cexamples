/*
Kullanýcý bir grup pozitif tam sayý giriyor ve 
veri giriþi negatif bir sayý girilene kadar devam ediyor. 
Kullanýcýnýn girdiði "çift tam sayýlarýn toplamýný" 
ve "tek tam sayýlarýn toplamýný" bulup bunlarý 
ekrana yazdýran bir C kodu yazýnýz. (Bu kodda 
"while" ya da "do-while" kullanýlacaktýr.)
*/
#include<stdio.h>
int main(){
	int sayi,tek_toplam,cift_toplam;
	tek_toplam=0;
	cift_toplam=0;
	sayi=54353;
	while(sayi>=0){
		printf("Sayi gir : ");
		scanf("%d",&sayi);
		if(sayi>=0){
			if(sayi%2==0){
				cift_toplam=cift_toplam+sayi;
			}
			else{
				tek_toplam=tek_toplam+sayi;
			}
		}
	}
	printf("Tek sayilarin toplami= %d\n",tek_toplam);
	printf("Cift sayilarin toplami= %d\n",cift_toplam);
	return 0;
}
