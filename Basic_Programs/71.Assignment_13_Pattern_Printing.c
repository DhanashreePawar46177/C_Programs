//A B C D E
//A       E
//A       E
//A       E
//A B C D E
#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0;
         char Ch = '\0';

         printf("\n Enter Count Of Rows and Columns = ");
         scanf("%d",&Cnt);

         printf("\n\n Pattern is => \n\n");

         for(r = 1; r <= Cnt; r++)
         {
                  for(c = 1, Ch = 'A'; c <= Cnt; c++, Ch++)
                  {
                           if(r == 1 || r == Cnt || c == 1 || c == Cnt)
                           {
                                 printf(" %c ",Ch);
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
