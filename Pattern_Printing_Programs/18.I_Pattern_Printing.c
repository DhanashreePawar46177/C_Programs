#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, rCnt = 0, cCnt = 0;

         printf("\n Enter Row Count = ");
         scanf("%d",&rCnt);

         printf("\n Enter Odd Number For Column Count = ");
         scanf("%d",&cCnt);

         printf("\n pattern is =>\n\n");

         for(r = 1; r <= rCnt; r++)
         {
                  for(c = 1; c <= cCnt; c++)
                  {
                          if(r == 1 || r == rCnt || c == cCnt/2+1)
                          {
                                printf(" * ");
                          }
                          else
                          {
                                printf("   ");
                          }
                  }
                  printf("\n");
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}
