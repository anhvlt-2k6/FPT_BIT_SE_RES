//THAYCACAC
#include <stdio.h>
#include <string.h>

bool isPalindrome(char s[]){
	for(int i=0; i<strlen(s)/2; i++)
		if(s[i]!=s[strlen(s)-1-i])	return false;
	return true;
}
int main(){
	char s[100];
	bool check;
	fflush(stdin);
	gets(s);
	check=isPalindrome(s);
	if(check==true)	printf("True");
	if(check==false) printf("False");
}
