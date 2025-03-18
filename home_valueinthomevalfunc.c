// home value with function int computeHomeValue (int popularity, int size)

#include <stdio.h>
#include <math.h>
int computeHomeValue (int popularity, int size);

int
main(void)
{
    int x,y;
    printf("Please enter the popularity of the neighborhood: \n");
    scanf("%d", &x);
    printf("Please enter the size of the house: \n");
    scanf("%d", &y);
    printf("The home value of the house is: %d",  computeHomeValue( x, y));
    return (0);
}

int
computeHomeValue (int popularity, int size)
{
    int homeValue_eqn;
    homeValue_eqn = ( pow(popularity, 3)+ pow(size, 2))*10000;
    return (homeValue_eqn);
}


