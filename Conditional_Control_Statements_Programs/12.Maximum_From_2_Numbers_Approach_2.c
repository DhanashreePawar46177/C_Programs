#include<stdio.h>
#include<conio.h>

int main()
{
         int Num1 = 0, Num2 = 0;

         printf("\n============************==============\n");

         printf("\n Enter First Integer Number = ");
         scanf("%d",&Num1);

         printf("\n Enter Second Integer Number = ");
         scanf("%d",&Num2);

         if(Num1==Num2)
         {
               printf("\n\t Both Numbers Are Equal");
         }
         else if(Num1 > Num2)
         {
               printf("\n\t %d is Maximum",Num1);
         }
         else
         {
               printf("\n\t %d is Maximum",Num2);
         }

         printf("\n\n============************==============\n");

         getch();
         printf("\n\n\t Thanks !!!\n");

         getch();
         return 0;
}
