#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("My name is Denys Chernenko\n");
    printf("Yeah, i know, that!\n");
    printf("Yeah, i know, that!\n");
    printf("Yeah, i know, that!\n");


    int a,b,c;
    printf("enter 3 integers:\n");
    scanf("%d %d %d", &a, &b, &c);
    int discr = b*b - 4*a*c;
    printf("It is Dis %d\n" , discr);

    if( a == 0) {
            if (b == 0){
                printf("not an euquation\n");
                return 0;
            }
        double x = -c / (double)b;
        printf("x = %g\n", x);
        return 0;
    }

    if(discr < 0) {
        printf("equation has no solutions\n");
    } else if( discr == 0) {
            double x = (-b )/ (2.0*a);
            printf("x = %g\n", x);
        } else {
        double discrl = sqrt(discr);
        double x1,x2;
        x1 = (-b + discrl)/ 2*a;
        x2 = (-b - discrl)/ 2*a;
        printf("x1 = %g\n " , x1);
        printf("x2 = %g\n " , x2);
        }
    return 0;
}