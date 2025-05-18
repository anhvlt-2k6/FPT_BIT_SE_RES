#include <stdio.h>
#include <math.h>

double myCos(double x, int n){
	double s,t,d;
	int i;
	t=1;
	s=1;
	d=1;
	for(i=2; i<=(2*n); i+=2){
		t*=x*x/(i*(i-1));
		d=-d;
		s+=d*t;
	}
	return(s);
}

int main(){
	printf("%f\n", cos(1.5));
	printf("cos(1.5) = %f", myCos(1.5,50000));
}
