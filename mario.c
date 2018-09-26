#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int hash=0;
    // задать высоту башни
    int height = get_int("Height: ");
    //переход на новую строку
    for (int i=1; i< height; i++)
    {
        //печать пробелов
       for (int space=height-1; space>i ; space--)
       {
          printf(" ");
       }
       //печать #
        for (hash=0; hash<=i; hash++)
        {
            printf ("#");
        }
            printf(" ");
        for (hash=0; hash<=i; hash++)
        {
            printf ("#");
        }
        printf("\n");
    }
}
