/*
    Excercise 1-5, [modify example 1-3] the temp conversion table 
    to print in reverse order (from 300 to 0).
*/ 

main() 
{
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;    /* lower limit of temperature table */
    upper = 300; /* upper limit */
    //step  = 20;  /* step size */
    step = -20;

    //fahr = lower;
    fahr = upper;
   
    //while (fahr <= upper )
    while (fahr >= lower)
     
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}