/*
1 1 2 3 5 8 13 21 34 55 ...
serisini hesaplayin
*/
#include<stdio.h>
int main(){
	int s1,s2,s3,i,n;
	
	printf("n degerini giriniz : ");
	scanf("%d",&n);

	s1=1;
	s2=1;
	printf("1 1 ");
	for(i=3;i<=n;i++){
		s3=s1+s2;
		printf("%d ",s3);
		printf("oran=%f \n",1.0*s3/s2);
		s1=s2;
		s2=s3;
		
	}
	
	return 0;
}
