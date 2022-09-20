//A
//D G
//J M P
//S V Y B
//E H K N Q
#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0;
         char Ch ='A';

         printf("\n Enter Count Of Rows and Columns = ");
         scanf("%d",&Cnt);

         printf("\n\n Pattern is =>\n\n");

         for(r = 1; r <= Cnt; r++)
         {
                  for(c = 1; c <= Cnt; c++)
                  {
                           if(r >= c )
                           {
                                printf(" %c ",Ch);
                                Ch += 3;
                           }
                           if(Ch > 'Z')
                           {
                                Ch = Ch - 26;
                           }

                  }
                  printf("\n");
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}
