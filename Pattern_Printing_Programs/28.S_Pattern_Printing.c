#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0;

         printf("\n Enter Odd Number For Count Of Rows and Columns = ");
         scanf("%d",&Cnt);

         printf("\n\n Pattern is =>\n\n");

         for(r = 1; r <= Cnt; r++)
         {
                  for(c = 1; c <= Cnt; c++)
                  {
                           if(r==1 && c!=1|| c==1 && r< (Cnt+1)/2 && r!=1 ||r == (Cnt+1)/2 && c < Cnt && c>1 || c == Cnt && r> (Cnt+1)/2 && r<Cnt || r==Cnt&& r>c)
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
