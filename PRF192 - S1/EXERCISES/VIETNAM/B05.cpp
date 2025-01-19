//THAYCACAC
#include <stdio.h>

void input(double &n){
	do{
		printf("Enter n = ");
		scanf("%lf", &n);
	}while(n>1||n<0);
	
}
void binary(double n){
	double surplus=n;
	while(surplus!=0){
		surplus*=2;
		if(surplus>=1){
			printf("1");
			surplus-=1;
		}		
		else{
			printf("0");
		}
	}
}
int main(){
	double n;
	input(n);
	binary(n);
}
