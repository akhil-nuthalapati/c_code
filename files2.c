#include<stdio.h>
#include<string.h>
int main()
{
  FILE *p;
  printf("writing data into file...\n");
  char ch;
  p = fopen("new1.txt","w");
  while(1)
  {
    ch = getchar();
    if(ch == -1)
    break;
    fputc(ch,p);
  }
  fclose(p);
  printf("new file created...\n");
  printf("reading new file....\n");
  p = fopen("new1.txt","r");
  while(1)
  {
    ch = fgetc(p);
    if(ch == -1)
    break;
    printf("%c",ch);
  }
  fclose(p);
    return 0;
}