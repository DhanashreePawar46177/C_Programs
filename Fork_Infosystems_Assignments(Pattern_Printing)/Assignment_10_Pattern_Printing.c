//2
//2 4
//2 4 6
//2 4 6 8
//2 4 6 8 10
#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0, No = 0;

         printf("\n Enter Count Of Rows and Columns = ");
         scanf("%d",&Cnt);

         printf("\n\n Pattern is => \n\n");


         for(r = 1; r <= Cnt; r++)
         {
                  for(c = 1, No = 1; c <= Cnt; c++,No++)
                  {
                           if( r >= c)
                           {
                                 printf(" %d ",No*2);
                           }
                  }
                  printf("\n");
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}
