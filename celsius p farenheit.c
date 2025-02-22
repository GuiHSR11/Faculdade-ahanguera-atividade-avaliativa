
#include <stdio.h>

int main()
{
    float celsius; 
    
    float farenheit;

    
    printf ("insira a temperatura em celsius:  \n");
    scanf ("%f", &celsius);

    printf("a temperatura em farenheit é: %.2f", celsius * 9/5 + 32 );
    
    return 0;
}
