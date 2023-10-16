#include<stdio.h>
#define p printf
#define s scanf

main(){
	int r,c;
	
	p("Enter row size : ");
	s("%d",&r);
	p("Enter column size : ");
	s("%d",&c);
	
	int i,j,a[r][c],b[c][r];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			p("a[%d][%d] : ",i,j);
			s("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
     		b[j][i]=a[i][j];
			p("%d ",a[j][i]);
		}
		p("\n");
	}

}
