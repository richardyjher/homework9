#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n,m;
	for (n=1;n<=9;n++)
	{
		
	for(m=1;m<=9;m++)
	printf("%d*%d=%2d  ",m,n,m*n);
	printf("\n");
	
    }
	system("pause");
	return 0;
}
