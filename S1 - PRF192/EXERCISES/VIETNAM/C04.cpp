#include <stdio.h>
#include <math.h>

double myPi(int n){
	double pi,t,d;
	int i;
	t=1;
	pi=0;
	d=-1;
	for(i=1; i<=(2*n+1); i+=2){
		t=1.0/i;
		d=-d;
		pi+=d*t;
	}
//	pi=4*pi;
	return(pi*4);
}

int main(){
	printf("%f", myPi(100000));
}
