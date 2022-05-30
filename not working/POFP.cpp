#include <iostream>
#include <ctype.h>
#include <stdio.h>

int main()
{
    char STR[] = "#E1x2";
    for (int b = 0; STR[b] != '\0'; b++)
    {
        if (!isdigit(STR[b]))
            STR[b] = '@';
        else if (isupper(STR[b]))
            STR[b] = '*';
        else
            STR[b] = STR[b + 1];
    }
    puts(STR);

    return 0;
}
