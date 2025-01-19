#include <stdio.h>

double mySin(double x, int n){
	double s,t,d;
	int i;
	t=x/1;
	s=t;
	d=1;
	for(i=3; i<=(2*n+1); i+=2){
		t*=x*x/(i*(i-1));
		d=-d;
		s+=d*t;
	}
	return(s)
}
int main(){
	printf("sin(1.5) = %f", mySin(1.5,50000));
}
