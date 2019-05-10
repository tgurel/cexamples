/*
matris kosegen toplama

*/
#include<stdio.h>
#include<math.h>
int main(){
	int a[3][3]={{453232,34,78},{12,9,42},{97,3,6}};
    int kosegen_toplami=0;

	int i,j;
	printf("a Matrisi...\n_____________________\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%7d ",a[i][j]);
		}
		printf("\n");
	}
	//kosegenleri topla
	for(i=0;i<3;i++){
		kosegen_toplami = kosegen_toplami + a[i][i];
	}
	
	printf("Kosegen toplam = %d",kosegen_toplami);
	
	return 0;
}




