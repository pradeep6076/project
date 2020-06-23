#include<stdio.h>    
void main ()    
{    
    int i, j,temp,largest,sec_largest;     
    int a[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};    
	 
    for(i = 0; i<10; i++)    
    {    
        if(a[i]>largest)      
		{
			sec_largest=largest;
			largest=a[i];
			} 
			elseif(a[i]>sec_largest & a[i]!=largest)
			{
				sec_largest=a[i];
			   }   
    }     
     printf("largest = %d, second largest = %d",largest,sec_largest);   
}
