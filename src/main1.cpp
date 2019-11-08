int main()
{
	int age=0;
	printf("How old are you? ");
	skanf("%d",&age);
	int result=ageCheck(age);
	if(result==1)
		printf("Acces granted!\n");
	else
		printf("Acces denied!\n");
	return 0;

