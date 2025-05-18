#include <iostream>

int main(){
	int n,i,gt=1;
	scanf("%d",&n);
	if(n==1)
		gt=1;
	else{
		for(i=1;i<=n;i++){
			gt*=i;
		}
	}
	printf("%d",gt);
}
