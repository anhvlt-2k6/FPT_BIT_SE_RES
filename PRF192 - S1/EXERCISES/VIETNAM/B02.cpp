//THAYCACAC
#include <stdio.h>

int gcd(int m,int n){
	while(m!=n){
		if(m>n)	m=m-n;
		else	n=n-m;
	}
	return(m);
}
int main(){
	int m,n;
	printf("Enter m = ");
	scanf("%d",&m);
	printf("Enter n = ");
	scanf("%d",&n);
	if(gcd(m,n)==1)	printf("true");
	else printf("false");
}
