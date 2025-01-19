//THAYCACAC
#include <stdio.h>

void input(int &n, double a[100]){
	printf("Enter n = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%lf",&a[i]);
	}
}
void swap(double &a, double &b){
	double temp;
	temp=a;
	a=b;
	b=temp;
}
void arrangement(int n, double a[100]){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=i;j--)
			if(a[j]<a[j-1])
				swap(a[j],a[j-1]);
	}
}
void display(int n, double a[100]){
	for(int i=0;i<n;i++)
		printf("%5.2lf",a[i]);
}
int main(){
	int n;
	double a[100];
	input(n,a);
	arrangement(n,a);
	display(n,a);
}
