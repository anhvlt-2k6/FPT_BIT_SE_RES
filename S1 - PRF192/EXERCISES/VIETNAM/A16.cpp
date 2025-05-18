//THAYCACAC
#include <stdio.h>

void check(int n, double x, double a[100]){
	int count=0;
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%lf",&a[i]);
	}
	printf("Position: ");
	for(int i=0;i<n;i++){
		if(a[i]==x){
			count++;
			printf("%5d",i);
		}
	}
	printf("\nCount = %d",count);
	return;
}

int main(){
	int n;
	double a[100],x;
	printf("Enter n = ");
	scanf("%d",&n);
	printf("Enter x= ");
	scanf("%lf",&x);
	check(n,x,a);
}
