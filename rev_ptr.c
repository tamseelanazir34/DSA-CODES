 #include<stdio.h>
 int main()
 {
 	char str[100];
 	char *p;
 	int count,i;
 	//input a string from the user
 	printf("enter ur name ");
 	scanf("%s",&str);
 	//display the string using pointer
 	p=&str[0];
 	while(*p!='\0'){
 		p++;
 		count++;
 	}
 		for(i=count-1;i>=0;i--){
 			
 			printf("reverse of a string =%c \n",str[i]);
		 }
		 return 0;
	}
