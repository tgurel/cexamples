/*
iki_boyutlu_dizi_ekrana yazdirma
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a[3][3]={{453232,34,78},{12,9,42},{97,3,6}};
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%7d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}




