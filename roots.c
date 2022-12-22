#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("enter the no a,b,c\n");
    scanf("%f,%f,%f",&a,&b,&c);
    d=((b*b)-(4*a*c));
    printf("%f\n",d);
    if (d>0)
    {
        printf("it has real roots");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("the roots are%f,%f\n",r1,r2);
    }
    else if (d==0)
    {
        printf("it has equal roots\n");
        r1=r2=(-b)/(2*a);
        printf("the eaqual roots are%f,%f\n",r1,r2);

    }
    else
    {
            printf("it has imaginary roots");
    }
    return 0;

}