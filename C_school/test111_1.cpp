#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
void star();
void star(int);
void sumton(int);
void prime_f(int);
float average(int,int);
int main()
{
    short int item;
    char ans;
    int m,n;
    
    do{    	
		system("cls");
		
    	printf("1.star\n");
		printf("2.star(n)\n");
		printf("3.sum(n)\n");
		printf("4.prime\n");
		printf("5.power\n");
		printf("6.average\n");
		
		printf("\nselect item:");    
	    scanf("%d",&item);
		
		switch(item)
		{			
			//輸入
			//呼叫
			//印出	   	   
			case 1: star() ;			   
				    break;			    
			case 2:	printf("number:");
   					scanf("%d",&n);
					star(n) ;						    
				    break;
			case 3:	printf("number:");
   					scanf("%d",&n);
					sumton(n) ;				
				    break;
			case 4:	printf("number:");
   					scanf("%d",&n);
					prime_f(n) ;			      
				   break;
			case 6:	printf("key in two numbers(int):");
   					scanf("%d%d",&m,&n);	
					printf("average=%f\n",average(m,n)); 		   
				   break;
			
		   default:printf("input error!");
				   break;
		}  
	
	    printf("play again?");
	    ans=getch();
	    printf("\n");
	}while(ans=='y'||ans =='Y'); 
	
    system("Pause");
	return 0;
}
float average(int x,int y)
{	
	return (x+y)/2.0;
}

void prime_f(int n)
{
	int i, j;
    int flag, line=0;
    
    printf("1-%d的質數如下\n\n", n);
    
	for(i=2; i<=n; i++)
  	{
     flag=0;
     for(j=2;j<i; j++)
     {
        if(i%j==0)
           flag=1;
     }
     
     if(flag==0)
     {
        printf("%3d ", i);
        line++;
        if(line%10==0)
          printf("\n");
     }
   }
	getch();
	return;
}
void sumton(int n)
{
	int i,sum=0;
	
	for(i=1;i<=n;i++)
	    sum+=i;
	printf("total=%d\n",sum);
	
	return;	
}
void star(int n)
{
	int i;
	for(i=1;i<=n;i++)
	    printf("*");
	printf("\n")	;
	return;	
}
void star() //2. 函數定義(function definition) 
{	 
	 printf("*********************\n")  ;
     
 	 return;   
}
