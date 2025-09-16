#include <stdio.h>
#include <math.h>

int main()
 {
    float a, b, c;
    float d, r1, r2;

    
    scanf("%f %f %f", &a, &b, &c);

    
    if (a == 0) 
    {
        printf("Not a quadratic equation\n");
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        
        r1= (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        
        if (r1 < r2) 
        {
            float temp = r1;
            r1 = r2;
            r2 = temp;
        }
        printf("Roots are real and different: %.0f, %.0f\n", r1, r2);
    } else if (d == 0)
     {
    
        r1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", r1);
    } 
    else 
    {
    
        printf("Roots are complex\n");
    }

    return 0;
}