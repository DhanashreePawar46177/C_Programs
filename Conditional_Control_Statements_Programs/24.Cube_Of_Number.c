#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0;

         Up:
         printf("\n\t================***********=================\n");

         printf("\n\t Enter Positive Integer Number = ");
         scanf("%d",&Num);

         if(Num <= 0)
         {
               printf("\n\t Invalid Number.\n\n\t Please Enter Another Number.");
               getch();
               system("cls");
               goto Up;
         }

         printf("\n\t Cube Of %d = %d",Num,Num*Num*Num);

         printf("\n\n\t==============***********=================\n");
         printf("\n\t\t Thanks !!!\n");

         getch();
         return 0;
}
