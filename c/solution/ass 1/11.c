#include <stdio.h>
int main()
{   int h,m;
    printf("Enter time i.e(\"HH:MM\"):");
    scanf("\"%d:%d\"",&h,&m);
    printf("%d Hour and %d Minute",h,m);
    return 0;
}