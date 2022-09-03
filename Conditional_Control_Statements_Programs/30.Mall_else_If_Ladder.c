#include<stdio.h>
#include<conio.h>

int main()
{
         float Amount = 0.0;

         printf("\n Enter Your Account Balance = ");
         scanf("%f",&Amount);

         printf("\n=================*******************=================\n");

         if(Amount > 10000)
         {
               printf("\n\t Welcome To Mall !!!\n");
               printf("\n\t You Are Prime Customer\n");
               printf("\n\t Go To Counter No 7 For Prime Offers\n");
         }
         else if(Amount >= 7000)
         {
               printf("\n\n\t Welcome To Mall !!!\n");
               printf("\n\t You Cam Enjoy All Shops\n");
         }
         else if(Amount >= 1000)
         {
               printf("\n\n\t Welcome To Mall !!!\n");
               printf("\n\t You Can Shop at Ground Floor\n");
         }
         else
         {
               printf("\n\t Minimum Balance To Required Shop is 1000+\n");
         }

         printf("\n=================*******************=================\n");

         getch();
         printf("\n\t Thanks For Visit !!!\n");

         getch();
         return 0;
}
