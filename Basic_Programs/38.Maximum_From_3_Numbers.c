#include<stdio.h>
#include<conio.h>

int main()
{
         int Num1 = 0, Num2 = 0, Num3 = 0;
         Up:

         printf("\n\n\t===========*******************===========\n");

         printf("\n\t Enter First Integer Number  = ");
         scanf("%d",&Num1);

         printf("\n\t Enter Second Integer Number = ");
         scanf("%d",&Num2);

         printf("\n\t Enter Third Integer Number  = ");
         scanf("%d",&Num3);

         if(Num1 == Num2 && Num2 == Num3)
         {
             printf("\n\n\t All Numbers Are Equal");
             getch();
             system("cls");
             goto Up;
         }

         if(Num1 > Num2 && Num1 >Num3)
         {
               printf("\n\n\t %d is Greater",Num1);
         }
         else if(Num2 > Num1 && Num2 > Num3)
         {
               printf("\n\n\t %d is Greater",Num2);
         }
         else if(Num3 > Num1 && Num3 > Num2)
         {
               printf("\n\n\t %d is Greater",Num3);
         }
         else if(Num1 == Num2)
         {
               if(Num1 > Num3)
               {
                     printf("\n\t %d is Greater",Num1);
               }
               else
               {
                      printf("\n\t %d is Greater",Num3);
               }
         }
         else if(Num2 == Num3)
         {
               if(Num1 > Num3)
               {
                     printf("\n\t %d is Greater",Num1);
               }
               else
               {
                     printf("\n\t %d is Greater",Num3);
               }
         }
         else if(Num1 == Num3)
         {
               if(Num1 > Num2)
               {
                     printf("\n\t %d is Greater",Num1);
               }
               else
               {
                     printf("\n\t %d is Greater",Num2);
               }
         }
         else
         {
                printf("\n\t Invalid Numbers");
         }

         printf("\n\n\t===========*******************===========\n");
         printf("\n\t\t Thanks !!!\n");

         getch();
         return 0;
}
