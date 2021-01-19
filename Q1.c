#include<stdio.h>
typedef struct
{
  char name[10];	
  int ID;	
  float GPA;
}Student;

Student min(Student s[10])
{
int i;
float min=s[0].GPA;

for(i=0;i<10;i++)
   { 
     if(s[i].GPA<min)
     min=s[i].GPA; 
	}

for(i=0;i<10;i++)
  if(s[i].GPA==min)

return s[i];
}


int main()
{
  int i;
  Student student[10], minstudent;
  for(i=0;i<10;i++)
  { 
    printf("Please Enter the student name for student No#%d:",i+1);
    gets(student[i].name);

    printf("Please Enter student ID:");
    scanf("%d",&student[i].ID);

    printf("Please Enter student GPA:");
    scanf("%f",&student[i].GPA);

     getchar();
   }

  minstudent = min(student);

printf("\nThe studen having least GPA is:\n");
printf("Name:%s\nID:%d\nGPA:%.2f",minstudent.name,minstudent.ID,minstudent.GPA);

return 0;
}






