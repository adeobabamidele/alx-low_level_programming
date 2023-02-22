#include <stdio.h>

#define MAXSTRING 80//from w  w w.j  a v a2s .co m

int main( void ){
    char message[] = "_putchar";
    
    for (int count = 0; count < MAXSTRING; count++)
    {
        if (message[count] == '\0')
        {
            putchar('\n');
            break;
        }
        else
            putchar(message[count]);
    }
    return 0;
}
