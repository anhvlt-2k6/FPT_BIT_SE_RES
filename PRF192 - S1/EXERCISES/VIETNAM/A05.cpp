#include <iostream>

int main(){
	int a,b,c;
	do{
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
	}
	while(a<=0||b<=0||c<=0);
	if(a+b>c&&b+c>a&&a+c>b)
		printf("true");
	else
		printf("false");
		return 0;
}
