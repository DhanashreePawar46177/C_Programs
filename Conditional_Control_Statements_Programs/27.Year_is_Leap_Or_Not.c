#include<stdio.h>
#include<conio.h>

int main()
{
         int Year = 0;

         printf("\n\t===============******===============\n");

         printf("\n\t Enter Year = ");
         scanf(" %d",&Year);

         if(Year % 4 == 0)
         {
             printf("\n\t %d is Leap Year",Year);
         }
         else
         {
             printf("\n\t %d is Not Leap Year",Year);
         }

         printf("\n\n\t===============******===============\n");
         printf("\n\t\t Thanks !!!\n");

         getch();
         return 0;
}
