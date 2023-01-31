#include<stdio.h>
#include<conio.h>
main()
{
	int number[25],n,data,i,flag = 0;
	printf("\n enter the number of element: ");
	scanf("%d",&n);
    printf("\n enter the element: ");
    for(i=0;i<n;i++)
    scanf("%d",&number[i]);
    printf("\n enter the element to be searched: ");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
    	if(number[i]==data)
    	{
    		flag = 1;
    		break;
		}
	}
	if(flag == 1)
	printf("\n data found at location : %d", i+1);
	else
	printf("\n data not found");
}
