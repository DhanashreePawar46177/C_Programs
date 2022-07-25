#include<stdio.h>
#include<conio.h>

int main()
{
         int Num1 = 0, Num2 = 0, Sub = 0;

         printf("\n================*********================\n");

         printf("\n Enter First Number For Subtraction = ");
         scanf("%d",&Num1);

         printf("\n Enter Second Number For Subtraction = ");
         scanf("%d",&Num2);

         Sub = Num1 - Num2;

         printf("\n Subtraction Of %d - %d = %d",Num1,Num2,Sub);

         printf("\n\n================*********================");

         getch();

         printf("\n\n\t Thanks !!!");

         getch();
         return 0;

}
