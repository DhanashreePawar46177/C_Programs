//A
//F G
//K L M
//P Q R S
//U V W X Y
#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0;
         char Ch = 'A';

         printf("\n Enter Count Of Rows and Columns = ");
         scanf("%d",&Cnt);

         printf("\n\n Pattern is => \n\n");

         for(r = 1; r <= Cnt; r++)
         {
                  for(c = 1; c <= Cnt; c++)
                  {
                         if(r >= c)
                         {
                               printf(" %c ",Ch);

                         }
                         Ch++;
                  }
                  printf("\n");
         }

         printf("\n\n Thanks !!!\n");
         getch();
         return 0;
}
