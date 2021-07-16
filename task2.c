#include<stdio.h>
int main()
{
int grade;
printf("Enter your marks ");
scanf("%d",&grade);
if(grade>=85)
{
printf("You got an A");
}
else if (grade>=70)
{
printf("You got a B");
}
else if(grade>=55)
{
printf("You got a C");
}
else if(grade>=40)
{
printf("You got a D");
}
else {printf("You got  C");
}
return 0;
}
