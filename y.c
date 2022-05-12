#include<stdio.h>
int main()
{
	int a,m,n;
	scanf("%d",&a);
	int b[a][a];
	for(m=0;m<=a;m++)
	{
		b[m][0]=1;
		b[m][m]=1;
	}
	for(m=2;m<=a;m++)
	{
		for (n=1;n<=m-1;n++)
		{
			b[m][n]=b[m-1][n]+b[m-1][n-1]; 
		} 
		for (m=0;m<a;m++)
		{
			for(n=0;n<=m;n++)
			printf("%6d",b[m][n]);
			printf("\n");
		}	
	} 
	printf("\n");
	return 0;
 
 }