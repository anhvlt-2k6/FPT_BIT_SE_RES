#include <iostream>

int main(){
	int i,j,k;
	for(i=1;i<=100;i++){
		for(j=1;j<=100-i;j++){
			for(k=1;k<=100-i-j;k++){
				if(i+j+k==100&&5*i+3*j+k/3==100&&k%3==0)
					printf("answer: %d %d %d\n",i,j,k);
			}
		}
	}
}
