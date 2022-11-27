#include <stdio.h>
#include <string.h>
int main()
{   char str[20];
    printf("enter username:");
    gets(str);
    printf("\"hello,%s \"",str);
    return 0;
}
