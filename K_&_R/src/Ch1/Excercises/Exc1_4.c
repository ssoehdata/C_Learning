// Exc 1-3 modified to convert Celsius to Fahrenheit

main() 
{
    int lower, upper, step;
    float fahr, celsius; 

    lower = 0;
    upper = 300;
    step  = 20;

    fahr = lower;
    printf("celsius  fahr\n");
    printf("=======  ==== \n");
    while (celsius <= upper) {
        //celsius = (5.0/9.0) * (fahr-32.0); 
        fahr = ((celsius * 1.8) + 32);       
        printf("%4.0f %6.1f\n", celsius, fahr);
        //fahr = fahr + step;
        celsius = celsius + step;
    }
}