#include<stdio.h>
int sum(int a,int b)
{
	int c;
	c = a+b;
	return c;
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
}
int mul(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
float div(int a,int b)
{
	float c;
	c=a/b;
	return c;
}
float mod(int a,int b)
{
	float c;
	c=a*b/100;
	return c;
}

main()
{
	int a,b,c;
	int choice,ch;

	

do
{
	printf("-----press-----\n");
	printf(" 1 for addition\n");
	printf(" 2 for substraction\n");
	printf(" 3 for multiplication\n");
	printf(" 4 for divition\n");
	printf(" 5 for modular\n");
	printf(" 0 for exit");
	scanf("%d",&choice);
	printf("enter a and b value::");
	scanf("%d %d",&a,&b);	
	switch(choice)
	{
				case 0 :
		         break;	
		case 1:
		         printf("sum = %d" ,sum(a,b));
		         break;
		         
		case 2:
			     printf("substraction = %d" ,sub(a,b));
		         break;
		         
		case 3:
		         printf("multiplication = %d" ,mul(a,b));
		         break;  
				 
	    case 4:
		         printf("divition = %d" ,div(a,b));
		         break;       
		         
		case 5:
		          printf("modular = %d" ,mod(a,b));
		          break;     
				  
		default:
		          printf("invalid choice!!");		      
		         
	}
	
}while(choice!=0);
}
