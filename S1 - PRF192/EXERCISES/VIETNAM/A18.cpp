//THAYCACAC
#include <stdio.h>

void parity(int n, int a[100]){
	int even=0,odd=0;
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==0)	even++;
		if(a[i]%2==1)	odd++;
	}
	printf("Even number of array = %d",even);
	printf("\nOdd number of array = %d",odd);
	return;
}
int main(){
	int n, a[100];
	printf("Enter n = ");
	scanf("%d",&n);
	parity(n,a);
}
