#include <iostream>

int main(){
	int n,i;
	float max,a[i];
	scanf("%d",&n);
	max=a[0];
	for(i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%f",&a[i]);
		if(a[i]>max)
			max=a[i];
	}
	printf("%f",max);
	
	return 0;
}
