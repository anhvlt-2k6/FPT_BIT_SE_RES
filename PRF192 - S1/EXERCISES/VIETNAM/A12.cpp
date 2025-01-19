#include <iostream>

int main(){
	int m,n,a;
	scanf("%d %d",&m,&n);
	while(m!=n){
		if(m>n){
			a=n;
			n=m-n;
			m=a;
		}
		else{
			a=m;
			m=n-m;
			n=a;	
		};
	};
	printf("answer: %d", m);
};
