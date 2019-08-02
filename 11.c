#include<stdio.h>
void main()
{
	int n,large=0,differ,slarge,i;
	printf("enter the number of array\n");
	scanf("%d",&n);	
	int a[n];
	for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
	large=a[0];
	for(int i=0;i<n;i++)
{
		if(a[i]>large)
{
		large=a[i];
}
}
       slarge=a[0];

	for(int i=0;i<n;i++)
{
		if(a[i]>slarge)
{
		slarge=a[i-1];
}
}



for(i=0;i<n;i++)
{
  if(a[i]==large)
     a[i]=a[i+1];
   else if(a[i]==slarge)
       a[i]==a[i+1];
}
for(i=0;i<n-2;i++)
{
printf("%d\t",a[i]);
}
}
