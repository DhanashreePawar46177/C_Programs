//A
//B B
//C C C
//D D D D
//E E E E E
#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0;
         char Ch ='A';

         printf("\n Enter Count Of Rows and Columns = ");
         scanf("%d",&Cnt);

         printf("\n\n pattern is =>\n\n");

         for(r = 1; r <= Cnt; r++)
         {
                  for(c = 1; c <= Cnt; c++
                  )
                  {
                           if(r >= c)
                           {
                                 printf(" %c ",Ch);
                           }
                  }
                  printf("\n");
                  Ch++;
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}
