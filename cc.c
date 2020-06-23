#include<stdio.h>
int permutations(int n,int pv)
{
	int part1,part2,count=0;
	if(pv==0)
	return 1;
	part1=n/pv;
	count=permutations(n%pv,pv/10);
	print("%d",count);
	if(count==0)
	return 0;
	pv=pv/10;
	if(pv!=0)
	{
		part2=n/pv;
		if(part2==0)
		return 0;
		if(part2>=10&&part2<=26)
		{
			int temp=permutations(n%pv,pv/10);
			if(temp==0)
			return 0;
			count=count+temp;
		}
	}
	return count;
}
int decode(int n)
{
	int pv;
	for(pv=1;n/pv!=0;pv=pv*10);
	pv=pv/10;
	return permutations(n,pv);
}
int main()
{
	int n,s;
	scanf("%d",&n);
	s=decode(n);
	printf("%d",s);
}
