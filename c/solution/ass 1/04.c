#include <stdio.h>
int main()
{
    float A,R;
    printf("enter radius of circle:");
    scanf("%f",&R);
    printf("R=%f\n",R);
    A = 3.14*R*R;
    printf("Area of circle is %f having radius %f",A,R);
    return 0;
}