#include<stdio.h>
#include<conio.h>

int main()
{
         int Num1 = 0, Num2 = 0;

         Up:
         printf("\n\t================**********==================\n");

         printf("\n\t Enter First Positive Integer Number = ");
         scanf("%d",&Num1);

         printf("\n\t Enter Second Positive Integer Number = ");
         scanf("%d",&Num2);

         for( Num1 == Num1; Num1 <= Num2; Num1 ++)
         {
                 printf("\n\t Square Of %d  = %d",Num1,Num1*Num1);
         }

         printf("\n\n\t================**********==================\n");
         printf("\n\t Thanks !!!");

         getch();
         return 0;
}
