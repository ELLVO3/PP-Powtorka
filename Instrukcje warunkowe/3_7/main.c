#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2, x0;

    printf("Podaj liczby do rownania kwadratowego:\n");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0 && b != 0)
    {
        x0 = -c/b;
        printf("Powstala funkcja liniowa ma miejsce zerowe: %.2f", x0);
    }

    else if(a == 0 && b == 0)
    {
        printf("%.2f", c);
    }

    else{
        delta = b*b - 4*a*c;

        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);

        if(delta > 0)
        {
            printf("Sa dwa pierwiastki rownania kwadratowego: %.2f, %.2f", x1, x2);
        }

        else if(delta == 0)
        {
            printf("Jest jeden pierwiastek rownania kwadratowego: %.2f", x1);
        }

        else{
            printf("Rownanie kwadratowe nie ma pierwiastkow.");
        }
    }

    return 0;
}
