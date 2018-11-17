#include "task1.h"

int ageCheck(int age)
{
	if (age >= 18)
		return 1;
	/*else здесь избыточен, так для примера*/
	else
		return 0;
	
	// можно так ещё
	//return age >= 18 ? 1 : 0;
	
	

}