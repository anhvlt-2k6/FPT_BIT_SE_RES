#include <iostream>

int main(){
	int x, hour,minute,second;
	scanf("%d",&x);
	hour=x/3600;
	minute=(x%3600)/60;
	second=(x%3600)%60;
	printf("answer %d %d %d", hour, minute, second);
}

