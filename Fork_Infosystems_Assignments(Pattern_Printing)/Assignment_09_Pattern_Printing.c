//0
//1  1
//2  3  5
//8  13 21  34
//55 89 144 233 377
#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0, No = 0,Sum = 0, Num1 = -1, Num2 = 1;

         printf("\n Enter Count Of Rows and Columns = ");
         scanf("%d",&Cnt);

         printf("\n\n Pattern is => \n\n");


         for(r = 1; r <= Cnt; r++)
         {
                  for(c = 1; c <= Cnt; c++)
                  {
                           if( r >= c)
                           {
                                    Sum = Num1 + Num2;
                                    Num1 = Num2;
                                    Num2 = Sum;
                                    printf(" %3d ",Sum);
                           }
                  }
                  printf("\n");
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}
