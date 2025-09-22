#include<stdio.h>
int main()
{
	
		char str[100];
		int i,count;
 	//input a string from the user
 	printf("enter ur name ");
 	scanf("%s",&str);
 	//length of the string
 	for(i=0;str[i]!='\0';i++)
 	
 		count++ ;
 	
 		printf("length of string=%d",count);

	return 0;
}
