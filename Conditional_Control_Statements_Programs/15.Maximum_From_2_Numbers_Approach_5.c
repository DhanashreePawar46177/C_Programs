#include<stdio.h>
#include<conio.h>

int main()
{
         int Num1 = 0, Num2 = 0;

         Up:

         printf("\n\n===========*******************===========\n");

         printf("\n Enter First Integer Number = ");
         scanf("%d",&Num1);

         printf("\n Enter Second Integer Number = ");
         scanf("%d",&Num2);

         if(Num1==Num2)
         {
               printf("\n Both Numbers Are Equal.\n\n Enter Another Numbers");
               getch();
               system("cls");
               goto Up;
         }
         (Num1>Num2) ? printf("\n\t %d is Maximum",Num1) : printf("\n\t %d is Maximum",Num2);

         printf("\n\n===========*******************===========\n");

         getch();
         printf("\n\n\t Thanks !!!\n");

         getch();
         return 0;
}
