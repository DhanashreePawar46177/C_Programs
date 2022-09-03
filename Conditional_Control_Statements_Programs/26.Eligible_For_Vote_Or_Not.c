#include<stdio.h>
#include<conio.h>

int main()
{
         int Age = 0;

         printf("\n\t==============***********=================\n");

         printf("\n\t Enter Your Age = ");
         scanf("%d",&Age);

         if(Age >= 18)
         {
               printf("\n\t You Are Eligible For Vote.");
         }
         else
         {
               printf("\n\t You Are Not Eligible For Vote.");
         }

         printf("\n\n\t==============***********=================\n");
         printf("\n\t\t Thanks !!!\n");

         getch();
         return 0;
}
