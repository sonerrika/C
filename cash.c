#include <cs50.h>
#include <stdio.h>

int main (void)
{
    float cash;
    int a=0, b=0, c=0, d=0;

    //Запрос положительного числа
   do {
    cash = get_float ("How much:");
   }
   while (cash<=0);

    //перевод в центы
   cash = cash*100;

   //рассчет сдачи четвертаков
   do{
    cash=cash-25;
    a++;
   }
   while (cash>=25);
   printf("%i quarters \n", a);

   do{
    cash=cash-10;
    b++;
   }
   while (cash>=10);
   printf("%i dimes \n", b);

   do{
    cash=cash-5;
    c++;
   }
   while (cash>=5);
   printf("%i nickels \n", c);

    do{
    cash=cash-1;
    d++;
   }
   while (cash>=1);
   printf("%i pennies \n", d);
}
