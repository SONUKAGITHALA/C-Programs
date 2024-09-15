#include<stdio.h>

int main()
{
	int n;
	printf("Even Numbers upto 10\n");
	while(n<=10){
		if(n%2==0){
			printf("%d", n);
		}
		printf("%d\n", n);
        n++;
	}  
	
}
