#include<stdio.h>
#include<conio.h>

int main()
{
         int Num1 = 0, Num2 = 0, Div = 0;

         printf("\n================***********================\n");

         printf("\n Enter First Number for Division = ");
         scanf("%d",&Num1);

         printf("\n Enter Second Number For Division = ");
         scanf("%d",&Num2);

         Div = Num1 / Num2;

         printf("\n Division Of %d / %d = %d",Num1,Num2,Div);

         printf("\n\n================***********================");

         getch();

         printf("\n\n\t Thanks !!!\n");

         getch();
         return 0;
}
