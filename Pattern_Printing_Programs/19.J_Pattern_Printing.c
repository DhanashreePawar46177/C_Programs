#include<stdio.h>
#include<conio.h>

int main()
{
        int r = 0, c = 0, Cnt = 0;

        printf("\n Enter Odd Number Count For Rows and Columns = ");
        scanf("%d",&Cnt);

        printf("\n\n Pattern is =>\n\n");

        for(r = 1; r <= Cnt; r++)
        {
                for(c = 1; c <= Cnt; c++)
                {
                        if(r == 1 || c == (Cnt+1)/2 && r < Cnt|| r == Cnt && c <= (Cnt+1)/2 && c >1 && c != (Cnt+1)/2 && c != 1|| c == 1 && r >= (Cnt+1)/2 && r < Cnt)
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
