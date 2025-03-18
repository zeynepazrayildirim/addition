// home value func with void computeHomeValue (void)
#include <stdio.h>
#include <math.h>

void computeHomeValue (void);
int
main(void)
{
    computeHomeValue ();
    return (0);
}

void
computeHomeValue (void)
{
    int popularity, //stands for the popularity of the neighborhood
           size,  // stands for the size of the house
           homeValue; // stands for the value of the house
    
    printf("Please enter the popularity of the neighborhood: \n");
    scanf("%d", &popularity);
    printf("Please enter the size of the house: \n");
    scanf("%d", &size);
    homeValue = (pow(popularity, 3)+ pow(size, 2))* 10000;
    printf("The home value of the house is: %d", homeValue);
}

