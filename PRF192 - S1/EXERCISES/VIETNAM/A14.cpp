#include <stdio.h>

void input(int m, int n){
	int a[100][100];
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	return;
}

void output_1(int m, int n){
	int a[100][100];
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return;
}

int main(){
	int m,n;
	scanf("%d %d", &m, &n);
	input(m,n);
	output_1(m,n);
}
