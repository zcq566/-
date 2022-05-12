#include<iostream>
using namespace std;
int main() {

	{
		int a,b,i,j;
		cin>>a>>b;
		int count,temp;
		scanf("%d%d",&a,&b); 
		for (i=a; i<=b; i++)
			int count=0,temp,j;
		for(int j=2; j<i; j++) {

			if(i%j==0)
				break;
		}
		if(j==i) {
			int temp=i;
			while(temp!=0) {
				count=count*10+temp%10;
				temp=temp/10;
			}
		}
		if(count==1)
		count<<i<<endl;
}
	return 0;
}