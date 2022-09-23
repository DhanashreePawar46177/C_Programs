#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, rCnt = 0, cCnt = 0;

         printf("\n Please Enter Row Count is Greater Than Column Count\n");

         printf("\n Enter Count For Rows = ");
         scanf("%d",&rCnt);

         printf("\n Enter Count For Columns = ");
         scanf("%d",&cCnt);

         printf("\n\n Pattern is =>\n\n");

         for(r = 1; r <= rCnt; r++)
         {
                  for(c = 1; c <= cCnt; c++)
                  {
                           if(r == 1 && c > 1 || r == rCnt && c > 1 || c == 1 && r > 1 && r < rCnt)
                            {
                                  printf(" *");
                            }
                            else
                            {
                                  printf("  ");
                            }
                  }
                  printf("\n");
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}
