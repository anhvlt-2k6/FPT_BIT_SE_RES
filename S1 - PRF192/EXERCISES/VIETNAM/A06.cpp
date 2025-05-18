#include <iostream>

int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%3==1)
			printf("%d\n",i);
	}
	return 0;
}
