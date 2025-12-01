#include<stdio.h>
#include<string.h>
struct stud
{
    char name[20];
    char course[20];
    int age;
    char gen;
};
int main()
{
  struct stud x;
  FILE *p;
  p = fopen("students.txt","rb");
  while(1)
  {  fread(&x,sizeof(x),1,p);
    if(feof(p))
    break;
    printf("name : %s\ncourse : %s\nage : %d\ngender : %c\n",x.name,x.course,x.age,x.gen);
  }
fclose(p);
    return 0;
}