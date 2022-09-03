//7
//14 21
//28 35 42
//49 56 63 70
//77 84 91 98 105
#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0, No = 0;

         printf("\n Enter Count Of Rows and Columns => ");
         scanf("%d",&Cnt);

         printf("\n\n Pattern is => \n\n");
         for(r = 1,No = 1; r <= Cnt; r++)
         {
                  for(c = 1; c <= Cnt; c++)
                  {
                           if(r >= c)
                           {
                                 printf(" %d ",7*No);
                                 No++;
                           }
                  }
                  printf("\n");
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}
