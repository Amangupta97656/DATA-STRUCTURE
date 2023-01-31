#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,n,temp,a[20],p=0;
	printf("enter total elements: ");
	scanf("%d",&n);
	printf("enter array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while((temp<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
		p++;
		printf("\n after pass\t%d:",p);
		for(k=0;k<n;k++)
		printf("\t%d",a[k]);
	}
	printf("\n store list: ");
	for(i=0;i<n;i++)
	printf("\t%d",a[i]);
}
