#include<stdio.h>
#define p printf
#define s scanf

main(){
	int r,c,r1,c1,r_sum=0,c_sum=0;
	p("Enter number of row : ");
	s("%d",&r);
	p("Enter number of column : ");
	s("%d",&c);
	int i,j,a[r][c];
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				p("a[%d][%d] : ",i,j);
				s("%d",&a[i][j]);
			}
		}
		
	p("Enter number of row\t: ");
	s("%d",&r1);
	p("Elements of row %d\t: ",r1);
	
		for(j=0;j<c;j++){
			p("%d, ",a[r1-1][j]);
			r_sum+=a[r1-1][j];
		}
		
	p("\nThe sum of a row %d\t: %d",r1,r_sum);
	p("\n\n==================================\n");
	p("\nEnter number of column\t: ");
	s("%d",&c1);
	p("Elements of row %d\t: ",c1);
	
		for(i=0;i<r;i++){
			p("%d, ",a[i][c1-1]);
			c_sum+=a[i][c1-1];
		}
		
	p("\nThe sum of a column %d\t: %d",c1,c_sum);
}
