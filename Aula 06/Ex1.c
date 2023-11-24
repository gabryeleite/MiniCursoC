#include <stdio.h>

int main()
{
    int numInt       = 5;
    float numFloat   = 3.14;
    double numDouble = 8.33;
    char carac       = 'k';

    int    * pontInt    = &numInt;
    float  * pontFloat  = &numFloat;
    double * pontDouble = &numDouble;
    char   * pontChar   = &carac;

    printf("\nORIGINAIS: %d %.2f %.2lf %c\n",
        numInt,
        numFloat,
        numDouble,
        carac
    );


    // numInt = 10;
    // ATRIBUIÇÃO DE VALORES POR REFERÊNCIA
    * pontInt    = 10;
    * pontFloat  = -4.15;
    * pontDouble = 3.14;
    * pontChar   = 'u';
    printf("NOVOS: %d %.2f %.2lf %c\n",
        numInt,
        numFloat,
        numDouble,
        carac
    );


    return 0;
}