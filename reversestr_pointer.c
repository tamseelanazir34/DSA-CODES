 #include<stdio.h>
 int main()
 {
 	char str[100];
 	char *p ,*q	;
 	int count,i;
 	//input a string from the user
 	printf("enter ur name ");
 	scanf("%s",&str);
 	p=&str;
 	q=&str;
 	
 	while(*q!='\0'){
 		q++;
 	}
 	q--;
 	while(q!=p)
 	{
	 
 	//display
 	printf("%c",*q);
 	
 	q--;
 }
 	printf("%c",*q);
 return 0;
 }
