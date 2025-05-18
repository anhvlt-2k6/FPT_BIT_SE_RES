//THAYCACAC
#include <stdio.h>

void findMoney(int surplus1, int surplus2, int surplus3){
	for(int i=0;i<surplus1;i++)
		for(int j=0;j<surplus2;j++)
			for(int k=0;k<surplus3;k++)
				if(i*500+j*200+k*50==5750)
					printf("%d 500d, %d 200d, %d 50d\n",i,j,k);
}
int main(){
	int surplus1, surplus2, surplus3;
	surplus1=5750/500;
	surplus2=5750/200;
	surplus3=5750/50;
	findMoney(surplus1,surplus2,surplus3);
	
}
