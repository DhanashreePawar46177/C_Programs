#include<stdio.h>
#include<conio.h>

int main()
{
         int Num1 = 0, Num2 = 0;

         printf("\n\t Enter First Number = ");
         scanf("%d",&Num1);

         printf("\n\t Enter Second Number = ");
         scanf("%d",&Num2);

         printf("\n\n\t============********=============\n");

         printf("\n\t Quotient = %d",Num1/Num2);
         printf("\n\n\t Remainder = %d",Num1%Num2);

         printf("\n\n\t============********=============\n");
         printf("\n\t\t Thanks !!!\n");

         getch();
         return 0;
}
