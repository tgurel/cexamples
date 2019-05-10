/*
matris_satir_elemanlari_topla.c
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a[3][3]={{45,34,78},{12,9,42},{97,3,6}};
    int toplam;

	int i,j;
	printf("a Matrisi...\n_____________________\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%7d ",a[i][j]);
		}
		printf("\n");
	}
	//satirlari topla
	for(i=0;i<3;i++){
		toplam=0;
		for(j=0;j<3;j++){
			toplam = toplam + a[i][j];
		}
		printf("%d. satir toplami = %d\n",i+1,toplam);
	}
	
	return 0;
}




