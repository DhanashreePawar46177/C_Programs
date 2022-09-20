//15
//20 25
//30 35 40
//45 50 55 60
//65 70 75 80 85
#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0, No = 0;

         printf("\n Enter Count Of Rows and Columns = ");
         scanf("%d",&Cnt);

         printf("\n\n Pattern is => \n\n");

         for(r = 1,No = 3; r <= Cnt; r++)
         {
                  for(c = 1; c <= Cnt; c++)
                  {
                           if(r >= c)
                           {
                                 printf(" %d ",No*5);
                                 No++;
                           }
                  }
                  printf("\n");
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}
