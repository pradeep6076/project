#include<stdio.h>
int main()
{
	int n,temp=0,s1=0,s2,rem=0,rev=0,temp1=0,rem1=0,rev1=0;
	scanf("%d",&n);
	s1=n*n;
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
		
		
		
	}
	s2=rev*rev;
	temp1=s2;
	
	
	while(temp1!=0)
	{
		rem1=temp1%10;
		rev1=rev1*10+rem1;
		temp1=temp1/10;
		
		
		
	}
	if(s1==rev1)
	printf("yes");
	else
	printf("no");
	
}
