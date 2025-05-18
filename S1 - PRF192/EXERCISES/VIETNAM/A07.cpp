#include <iostream>

int main(){
	float a,b,c,d,max;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
	if(d>max)
		max=d;
	printf("%.1f",max);
	return 0;
}
