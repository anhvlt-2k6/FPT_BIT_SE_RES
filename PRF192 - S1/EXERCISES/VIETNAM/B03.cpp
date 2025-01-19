//THAYCACAC
#include <stdio.h>
int amstrong(int i){
	int s=0,d;
	while(i!=0){
		d=i%10;
		s+=d*d*d;
		i/=10;
	}
	return s;
}
int main(){
	int count=0;
	for(int i=100;i<1000;i++){
		if(i==amstrong(i)){
			printf("%d\n",i);
			count++;
		}
	}
	printf("There are %d number is amstrong",count);
}
