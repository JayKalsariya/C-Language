#include<stdio.h>
#define p printf
#define S scanf

main(){
	char e[20], P[20];
	int le=0, i, e2=0, P2=0, u=0, l=0, d=0, sy=0;
	p("enter your email : ");
	S("%s",&e);
	p("enter your password : ");
	S("%s",&P);
	
	for(i=0; e[i]!=NULL; i++){
		
		if(e[i]=='@' || e[i]=='.'){
			e2++;
		}
	}
	
	for(i=0; P[i]!=NULL; i++){
		le++;
	}
	for(i=0; i<le; i++){
		if(le>=8){
			if(P[i]>=65 && P[i]<=90)
				u++;
			if(P[i]>=97 && P[i]<=122)
				l++;
			if((P[i]>=33 && P[i]<=47) && (P[i]>=58 && P[i]<=64) )
				sy++;
			if(P[i]>=48 && P[i]<=57)
				d++;
		}
	}
	
	if(e2==2){
			p("your email is valid...\n");
		}
		else{
			p("your email is Invalid...\n");
		}
	if(le>=8){
		if(u>=1 && l>=1 && sy>=1 && d>=1){
		p("Password is Valid...\n");
		}
		else{
			p("Password is Invalid...\n");
		}
	}
}
