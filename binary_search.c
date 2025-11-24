#include<stdio.h>
int main()
{
  int st,mid,end,tar,n,i;
  int found = 0;
  printf("enter number of mem alloc : ");
  scanf("%d",&n);
  int a[n];
  printf("enter elements in an asending order : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter target : ");
  scanf("%d",&tar);
  st=0,end=n-1;
  while(st<=end)
  {
   mid = (st + end)/2;
   if(tar > a[mid])
   st = mid + 1;
   else if(tar < a[mid])
   end = mid-1;
   else
   {found = 1; 
    break;}
  }
  if(found)
  printf("target found at : %d",mid+1);
  else
  printf("target not found.....");
    return 0;
}