/*
verilen 
*/
#include<stdio.h>
#include<math.h>
// prototip
int asalSayiBul(int);
int main(){
	int a,b,sonuc;
//	printf("a ve b degerlerini giriniz :");
//	scanf("%d%d",&a,&b);
	sonuc=asalSayiBul(10001);
	printf("Sonuc = %d",sonuc);
	
	return 0;
}
int asalSayiBul(int m){
	int i,sayac=0,bolen=0,n=2;
	while (sayac<m){
		bolen=0;
		
		for(i=2;i<=n/2;i++){
		
			if (n%i==0){
				bolen++;
				break;
			}
		}
		if (bolen==0){
			printf("asal sayi=%d\n",n);
			sayac++;
		}
		n++;
	}
	return n-1;
}



