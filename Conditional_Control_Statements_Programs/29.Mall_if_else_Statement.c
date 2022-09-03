#include<stdio.h>
#include<conio.h>

int main()
{
         float Amount = 0.0;

         printf("\n Enter Your Account Balance = ");
         scanf("%f",&Amount);

         printf("\n\n=================*************=================\n");

         if(Amount > 1000)
         {
               printf("\n\t Welcome To Mall !!!\n");
               printf("\n\t Enjoy Your Shopping !!!");
         }

         else
         {
               printf("\n Minimum Balance Required To Shop is 1000+\n");
         }

         printf("\n\n=================*************=================\n");

         getch();
         printf("\n Thanks For Visit !!!\n");

         getch();
         return 0;
}
