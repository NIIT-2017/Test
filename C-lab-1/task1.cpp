int getRecommendation(char gender, float height, float weight)
{
	int opt=0;

	if (gender == 'm')
	{
		opt = height - 100;
		
	}
	else 
	{
		opt = height - 110;
		
	}
		
	
	if (opt > weight)
	{
		return -1;
	}
	else if (opt < weight) 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}