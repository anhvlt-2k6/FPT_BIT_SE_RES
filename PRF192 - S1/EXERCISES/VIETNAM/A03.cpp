//THAYCACAC
#include <iostream>

int main() {
	int i,n,s=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%7==0)
			s+=i;
	}
	printf("%d",s);
	return 0;
}
