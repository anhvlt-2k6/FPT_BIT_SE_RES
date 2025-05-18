//THAYCACAC
#include <iostream>

int main() {
	int n, i;
	float s=0.0;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		s+=1.0/i;
	}
	printf("%f",s);
	return 0;
}
