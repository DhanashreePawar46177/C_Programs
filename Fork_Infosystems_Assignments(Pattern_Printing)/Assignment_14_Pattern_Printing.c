//A B C D E
//B       B
//C       C
//D       D
//A B C D E
#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0;
         char Ch = '\0';

         printf("\n Enter Count for Rows and Columns = ");
         scanf("%d",&Cnt);

         printf("\n\n Pattern is => \n\n");

         for(r = 1 ; r <= Cnt; r++)
         {
                  for(c = 1,Ch = 'A'; c <= Cnt; c++)
                  {
                           if(r == 1 || r == Cnt || c == 1 || c == Cnt)
                           {
                                 if( r == 1 || r == Cnt)
                                 {
                                        printf(" %c ",Ch);
                                 }
                                 else
                                 {
                                        Ch = 'A';
                                        Ch = Ch + (r - 1);
                                        printf(" %c ",Ch);
                                 }
                           }
                           else
                           {
                                 printf("   ");
                           }
                           Ch++;
                  }

                  printf("\n");
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}
