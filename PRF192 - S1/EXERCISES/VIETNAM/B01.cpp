//THAYCACAC
#include <stdio.h>

int main(){
	int n,count=0;
	printf("Enter n = ");
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(n%i==0){
			printf("%4d",i);
			count++;
		}
	}
	printf("\n%d",count);
}
