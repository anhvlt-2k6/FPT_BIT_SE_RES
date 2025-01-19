//THAYCACAC
#include <stdio.h>

void checkIncrease(int n, double a[]){
	bool check=true;
	int i;
	for(i=0; i<n-1; i++)
		if(a[i]>a[i+1]){
			check=false;
			break;
		}
	if(check==false){
		printf("/nFalse\n");
		printf("Position: %d",i+1);
	}
	if(check==true)
		printf("True");
}
void input(int &n, double a[]){
	printf("Enter n: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%lf", &a[i]);
	}
}
int main(){
	int n;
	double a[100];
	input(n,a);
	checkIncrease(n,a);
}
