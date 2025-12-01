#include<stdio.h>
#include<string.h>
int main()
{
  FILE *p;
  char ch;
  p = fopen("new2.txt","w+");
  printf("writing data into file...\n");
  while(1)
  {
    ch = getchar();
    if(ch == -1)
    break;
    fputc(ch,p);
  }
  printf("one new file created ..\n");
  printf("reading data from the file...\n");
  rewind(p);
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