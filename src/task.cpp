int ageCheck(int age)
{
	if (age >= 18 && age <= 150)
		return 1;
	else if (age >= 0 && age < 18)
		return 0;
	else if (age < 0 || age>150)
		return -1;
}