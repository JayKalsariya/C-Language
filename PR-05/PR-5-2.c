#include<stdio.h>
#define p printf
#define s scanf

main(){
	int r,c;
	p("Enter number of row : ");
	s("%d",&r);
	p("Enter number of column : ");
	s("%d",&c);
	
	int i,j,a[i][j],max;
	p("Enter elements of matrix...\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			p("a[%d][%d] : ",i,j);
			s("%d",&a[i][j]);
			if(a[i][j]>max){
				max=a[i][j];
			}
		}
	}
	p("Maximum number from an array : %d",max);
	
}
