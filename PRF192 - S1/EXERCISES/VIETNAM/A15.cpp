#include <stdio.h>
#define max 100

int main(){
	double m,n,k,a[100][100],b[100][100];
	int i,j;
	scanf("%lf%lf", &m, &n, &k);
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%lf",&a[i][j]);
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%lf",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++){
		for(j=0; j<k; j++){
			scanf("%lf",&b[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<k; j++){
			printf("%lf",a[i][j]);
		}
		printf("\n");
	}
}
