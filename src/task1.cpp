#include "task1.h"  

int ageCheck(int age)
{
	if (age >= 18)           //проверка возраста (длинный и понятны вариант)
		return 1;
	else
		return 0;
	//return age >= 18 ? 1 : 0;     //проверка коротко
}