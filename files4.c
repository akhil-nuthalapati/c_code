#include<stdio.h>
#include<string.h>
struct stud{
   char name[20];
   char course[20];
   int age;
   char gen;
};
int main()
{
  FILE *p;
  struct stud x;
  char ch;
  p = fopen("students.txt","wb");
  ch = 'y';
  while(ch == 'y')
  {
      printf("enter name : ");
      scanf("%s",x.name);
    printf("enter course : ");
    scanf("%s",x.course);
        printf("enter age : ");
        scanf("%d",&x.age);
        fflush(stdin);
    printf("enter gender : ");
    scanf("%c",&x.gen);
    fwrite(&x,sizeof(x),1,p);
printf("want to use again (y/n) : ");
scanf(" %c",&ch);
  }
fclose(p);
    return 0;
}