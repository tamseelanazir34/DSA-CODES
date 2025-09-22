 #include<stdio.h>
 int main()
 {
 	char str[100];
 	char *p;
 	//input a string from the user
 	printf("enter ur name ");
 	scanf("%s",&str);
 	//display the string using pointer
 	p=&str[0];
 	while(*p!='\0'){
 		
 		printf("%c",*p);
 		p++;
	 }
	 return 0;
}
