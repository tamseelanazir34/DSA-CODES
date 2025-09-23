#include<stdio.h>
void insertChar(char *str,char ch,int pos)
{
	char *p=str;
	int count=0;
	while(*p!='\0'){
		p++;
		count++;
	}
	if(pos==count)
	{
	*(str+count)=ch;
	*(str+count+1)	='\0';
		
	return;	
	}
	
	
	
	
	
	//insertion at the end
	char *end=str+count;
	while(end>=str+pos)
	{
	
	
	
	*(end+1)=*end;
	end--;
}
	
*(str+pos)=ch;	
	
}


int main()
{
char str[100];
char ch;
int pos;

printf("enter a string:");
scanf("%c",&str)	;
	
printf("enter a character u want to insert\n");	
	scanf("%c",&ch);
	
	printf("enter position");
	scanf("%d",&pos);
	
	insertChar(str,ch,pos);
	printf("after insertion %s \n",str);
	
	
	
	return 0;
}
