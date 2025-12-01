#include<stdio.h>
#include<string.h>
void main()
{
  FILE *p;
  char ch;
  p = fopen("solutions.txt","a");
  while(1)
  {
    ch = getchar();
    if(ch == -1)
    break;
    fputc(ch,p);
  }
  fclose(p);
  printf("new file created...\n");
}