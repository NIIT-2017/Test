int main()
{
   int age=0;
   printf("How old are you? ");
   scanf("%d", &age);
   int result=ageCheck(age);
   if(result==1)
      print("Access granted!\n");
    else
       printf("Access denied!\n");
    return 0;
 }