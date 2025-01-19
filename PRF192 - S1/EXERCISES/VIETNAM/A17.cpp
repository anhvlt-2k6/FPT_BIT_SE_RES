//THAYCACAC
#include <stdio.h>

void minArr(int n, int a[100]){
	int min;
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(int i=1;i<n;i++){
		if(min>a[i])
			min=a[i];
	}
	printf("Min of array = %d",min);
	printf("\nPosition = ");
	for(int i=0;i<n;i++){
		if(a[i]==min)
			printf("%d",i);
	}
	return;
}
int main(){
	int n, a[100];
	printf("Enter n = ");
	scanf("%d",&n);
	minArr(n,a);
}
