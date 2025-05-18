//THAYCACAC
#include <iostream>

int main() {
	int i, j, k, n, s1=0, s2=0, s3=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		s1+=i;
	}
	for(j=0;j<=n;j++){
		if(j%2==0)
			s2+=j;
	}
	for(k=0;k<=n;k++){
		if(k%2!=0)
			s3+=k;
	}
	printf("%d\n",s1);
	printf("%d\n",s2);
	printf("%d\n",s3);	
	return 0;
}
