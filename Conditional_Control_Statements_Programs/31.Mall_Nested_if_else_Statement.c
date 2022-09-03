#include<stdio.h>
#include<conio.h>

int main()
{
         float Amount = 0.0;

         printf("\n Enter You Account Balance = ");
         scanf("%f",&Amount);

         printf("\n\n=================*******************=================\n");

         if(Amount > 1000)
         {
               printf("\n Welcome To Mall !!!\n");
               if(Amount > 10000)
               {
                     printf("\n You Can Be Prime Member Of This Mall\n");
               }
               else
               {
                     printf("\n Have Nice Shopping\n");
               }
         }
         else
         {
               printf("\n Minimum Balance Required To Shop Here is 1000+\n");
               if(Amount > 500)
               {
                     printf("\n But You Can Visit Our Outlet At Corner\n");
               }
               else
               {
                     printf("\n You Are Not Eligible To Shop\n");
               }
         }
         printf("\n\n=================*******************=================\n");

         getch();
         printf("\n\t Thanks For Visit !!!\n");

         getch();
         return 0;
}
