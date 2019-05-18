//Assuming that the array is sorted in ascending order

#include<stdio.h>

int binary(int a[],int n,int x)
{
int ul=n-1,ll=0,mid;
do
{   mid=(ul+ll)/2;
    if(a[mid]==x)      
       return mid;
    else if(a[mid]<x)
        ll=mid+1;
    else ul=mid-1;
}
while(ll<=ul);
 if(a[mid]==x)      
       return mid;
return -1;

}

int main()
{
int n,a[20],x;
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the element to be found");
scanf("%d",&x);
int b=binary(a,n,x);
if(b==-1) printf("Element not found");
else printf("Element found at position %d",b+1);
return 0;
    
}
