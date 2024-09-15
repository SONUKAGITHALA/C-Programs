#include<stdio.h>

int main()
{
	int n;
	printf("Even Numbers upto 10\n");
	do{
		if(n%2==0){
			printf("%d", n);
		}
		printf("%d\n", n);
		n++;
	}while(n<=10);
}
