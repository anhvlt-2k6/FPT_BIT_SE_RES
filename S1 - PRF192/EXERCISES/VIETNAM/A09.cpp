#include <iostream>
#include <math.h>

int main(){
	float a,b,c,delta;
	scanf("%f %f %f",&a,&b,&c);
	if(a==0){
		printf("x= %f",-c/b);
	}
	else{
		delta=b*b-4*a*c;
		if(delta<0.0)
			printf("false"); 
		if(delta==0.0)
			printf("x= %f",-b/(2*a));
		if(delta>0.0){
			printf("x1= %f\n",(-b-sqrt(delta))/(2*a));
			printf("x2= %f\n",(-b+sqrt(delta))/(2*a));
		}
	}
	return 0;
}
