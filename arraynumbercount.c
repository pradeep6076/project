#include<stdio.h>
int main()
{
	int size,i,j,n,itr=0,coun=1;
	int temp=0;
	scanf("%d",&size);
	int arr[size];
	int count[20];
	int var[20];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]!=-1)
		{
		
		for(j=i+1;j<size;j++)
		{
		if(arr[i]==arr[j])
		{
			coun++;
			arr[j]=-1;
			}
				
		}
		count[itr]=coun;
		var[itr]=arr[i];
		coun=1;
		itr++;
		
		
		}
	}
	for(i=0;i<itr;i++)
	{
		for(j=i+1;j<itr;j++)
		{
			if(count[i]<count[j])
			{
			
			temp=count[i];
			count[i]=count[j];
			count[j]=temp;
			temp=var[i];
			var[i]=var[j];
			var[j]=temp;
			
		}
	}
		
	}
	for(i=0;i<itr;i++)
	{
		for(j=0;j<count[i];j++)
		{
		printf("%d",var[i]);
	} 
}

	
}
