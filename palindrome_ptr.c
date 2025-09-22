#include<stdio.h>
int main()
{
 	char str[100];
 	char *p ,*q	;
 	//input a string from the user
 	printf("enter ur name ");
 	scanf("%s",&str);
 	p=&str;
 	q=&str;
while(*q!='\0'){
	q++;
}
//check palindrome
 	while(p<q){
 		if(*p!=*q){
 			printf("the string is not a palendrome\n");
		 }
		 p++;
		 q--;
	 }
	 printf("the string is a palindrome\n");
	 return 0;
}
