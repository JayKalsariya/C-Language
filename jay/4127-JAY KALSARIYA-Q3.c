#include<stdio.h>
#define p printf
#define S scanf

struct pro{
	char pname[20];
	int pn, pq, pp;
};


main(){
	int n, i;
	FILE *fp;
	fp=fopen("ans.txt","w");
	
	char name[20], mo[10];
	p("Enter name : ");
	S("%[^\n]",&name);
	p("Enter mo.no. : ");
	S("%s",&mo);
	p("Enter total Product of num : ");
	S("%d",&n);
	struct pro o[n];
	
	for(i=0; i<n; i++){
		
			p("Enter Product no : ");
			S("%d",&o[i].pn);
			p("Enter Product name : ");
			S("%s",&o[i].pname);
			p("Enter Product qut : ");
			fflush(stdin);
			S("%d",&o[i].pq);
			p("Enter Product price : ");
			fflush(stdin);
			S("%d",&o[i].pp);
		
	}
	
	for(i=0; i<n; i++){
		sum+=o[i].pp;
	}
	
	p("NAME : %s",o[i].pname);
	p("Contact no. : %s",o[i].pn);
	p("\n-----------------------------------------------\n");
	p("product no\tproduct name\tproduct qut\tproduct price\n");
	p("\n-----------------------------------------------\n");

}
