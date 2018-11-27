const char* checkAge(int age)
{
    if (age>0 && age<18)
        return "Access denied\n";
    else if (age >=18)
        return "Access granted\n";
}
