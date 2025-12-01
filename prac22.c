#include<Stdio.h>
int main()
{
  int i;
  short arr[5]={20,30,40,50,60};
  short *p=&arr[5];
  for(i=0;i<5;i++)
  printf("%hd\t",*(&arr[i]));
  return 0;
}