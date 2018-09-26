#include <cs50.h>
#include <stdio.h>

int main (void){
    int n=0, m=0, sum_1=0, sum_2=0, card_l=0;
    //запрос номера карты и проверка ввода
    long long cc_number, card, type;
    do {
        cc_number = get_long_long ("Cive me a credit card number:");
    }
    while (cc_number<=0);

    card=type=cc_number;

    //разбиение числа на цифры
   for (int i=1; i<16; i++)
   {
    if (i%2!=0)
    //цифры нечетного порядка
    {
    n=cc_number%10;
    cc_number=cc_number/10;
    sum_1=sum_1+n;
    }
    else

    //цифры четного порядка
    {
   m=cc_number%10;
   cc_number=cc_number/10;
    sum_2=sum_2+m*2;
    }
   }


   //проверка валидности карты
  if ((sum_1+sum_2)%10==0)
  {
    printf("VALID \n");
  }
  else
  {
 printf("INVALID \n");
  }

  //название комании
  //определение длины строки

do
  {
      card=card/10;
      card_l++;
  }
  while(card>=1);


  if (card_l==15)
    {
        if ((type/(long long)10E12)==34 || (type/(long long)10E12)==37 )
        {
          printf ("Amex\n");

        }
        else
        { printf ("INV\n");

        }
    }
    else if (card_l==16)
    {

        if ( 51<= type/(long long)10E13==34 <=54)
        {
         printf ("MasterCard\n");
        }

        else if (type/(long long)10E14==4)
        {
            printf ("VISA\n");
        }

    }

        else if (card_l==13 && type/(long long)10E11==4)
        {
            printf ("VISA\n");
        }
    else
        {
            printf ("INVALID\n");

        }

}
