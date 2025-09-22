 #include<stdio.h>
 int main()
 {
 	char str[100];
 	char *p;
 	int count;
 	//input a string from the user
 	printf("enter ur name ");
 	scanf("%s",&str);
 	//display the string using pointer
 	p=&str[0];
 	while(*p!='\0'){
 		
 		printf("%c",*p);
 		p++;
 		count++;
 		printf("the lenth of string =%d \n",count);
 	}
 		return 0;
 	}
