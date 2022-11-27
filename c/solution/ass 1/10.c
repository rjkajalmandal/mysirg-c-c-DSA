#include <stdio.h>
int main()
{   int d,m,y;
    printf("Enter date i.e(\"DD/MM/YYYY\"):");
    scanf("\"%d/%d/%d\"",&d,&m,&y);
    printf("\"DATE-%d,MONTH-%d,YEAR-%d\"",d,m,y);
    return 0;
}