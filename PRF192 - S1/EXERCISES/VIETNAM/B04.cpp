//THAYCACAC
#include <stdio.h>

void input(int &n){
	printf("Enter n = ");
	scanf("%d",&n);
}
void binary(int n){
	int i=0,a[100];
	while(n!=0){
		a[i]=n%2;
		n/=2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
		printf("%d",a[j]);
}
int main(){
	int n;
	input(n);
	binary(n);
}
