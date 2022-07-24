#include<stdio.h>
#include<conio.h>

int main()
{
         int Num1 = 0, Num2 = 0, Sum = 0;

         printf("\n================*********================\n");

         printf("\n Enter First Numbers For Addition = \n");
         scanf("%d",&Num1);

         printf("\n Enter Second Number For Addition = \n");
         scanf("%d",&Num2);

         Sum = Num1 + Num2;

         printf("\n\t %d + %d = %d",Num1, Num2, Sum);

         printf("\n\n\t Thanks !!!");
         printf("\n\n================*********================\n");

         getch();
         return 0;
}
