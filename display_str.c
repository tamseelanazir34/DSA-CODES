 #include<stdio.h>
 int main()
 {
 	char str[100],i;
 	//input a string from the user
 	printf("enter ur name ");
 	scanf("%s",&str);
 	//display the string
 	for(i=0;str[i]!='\0';i++)
 	{
 		printf("%c",str[i]);
	 }

 	return 0;
 }
