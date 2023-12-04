#include<stdio.h>
#define p printf
#define S scanf

struct pro{
	char pname[20];
	int pn, pq, pp;
};


main(){
	int n, i, sum=0;
	FILE *fp;
	fp=fopen("ans.txt","w");
	
	char name[20], mo[10];
	p("Enter name : ");
	S("%[^\n]",&name);
	p("Enter mo.no. : ");
	S("%s",&mo);
	p("Enter total Product of num : ");
	fflush(stdin);
	S("%d",&n);
	struct pro o[n];
	
	for(i=0; i<n; i++){
		
			p("\nEnter Product no\t: ");
			S("%d",&o[i].pn);
			p("Enter Product name\t: ");
			S("%s",&o[i].pname);
			p("Enter Product qut\t: ");
			fflush(stdin);
			S("%d",&o[i].pq);
			p("Enter Product price\t: ");
			fflush(stdin);
			S("%d",&o[i].pp);
		
	}
	
	for(i=0; i<n; i++){
		sum+=(o[i].pp * o[i].pq);
	}
	
	fprintf(fp,"NAME\t\t: %s\n",name);
	fprintf(fp,"Contact no.\t: %s\n",mo);
	fprintf(fp,"\n--------------------------------------------------------------\n");
	fprintf(fp,"product no\tproduct name\tproduct qut\tproduct price\n");
	fprintf(fp,"--------------------------------------------------------------\n");
	
	for(i=0; i<n; i++){
		fprintf(fp,"%d\t\t%s\t\t%d\t\t%d\n",o[i].pn,o[i].pname,o[i].pq,o[i].pp);
	}
	
	
	fprintf(fp,"\n------------------TOTAL BILL----------------------%.2f-------",sum + ((float)sum * 0.18));

}