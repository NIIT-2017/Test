int main()
{
int age=0;
printf("How old are you?")
scanf("%d",&age);
int result=ageCheck(age);
if(result==1)
printf("Access garanted!\n");
else
printf(Access dentied!\n");
return 0;
}