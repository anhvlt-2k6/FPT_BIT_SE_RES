//THAYCACAC
#include <stdio.h>

int factorial(int n){
	int factorial=1;
	if(n%2==0)
		for(int i=2; i<=n; i+=2)
			factorial*=i;
	if(n%2==1)
		for(int i=1; i<=n; i+=2)
			factorial*=i;
	return factorial;
}
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Factorial: %d",factorial(n));
}
