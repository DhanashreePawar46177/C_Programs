//1
//2  3
//4  5  6
//7  8  9  10
//11 12 13 14 15
#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0, No = 1;

         printf("\n Enter Count For Rows and Columns => ");
         scanf("%d",&Cnt);

         printf("\n\n Pattern is =>\n\n");

         for(r = 1; r <= Cnt; r++)
         {
                  for(c = 1; c <= Cnt; c++)
                  {
                           if(r >= c)
                           {
                                 printf(" %2d ",No);
                                 No++;
                           }
                  }
                  printf("\n");
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}
