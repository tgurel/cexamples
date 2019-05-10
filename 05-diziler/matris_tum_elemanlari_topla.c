/*
matris_tum_elemanlari_topla
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a[3][3]={{45,34,78},{12,9,42},{97,3,6}};
    int toplam=0;

	int i,j;
	printf("a Matrisi...\n_____________________\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%7d ",a[i][j]);
		}
		printf("\n");
	}
	//tum elemanlari topla
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			toplam = toplam + a[i][j];
		}
	}
	printf("Tum elemanlarin toplam = %d",toplam);
	
	
	return 0;
}




