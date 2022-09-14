#include<stdio.h>
#include<conio.h>

int main()
{
        int r = 0, c = 0, Cnt = 0;

        printf("\n Enter Odd Number Count For Rows and Columns = ");
        scanf("%d",&Cnt);

        printf("\n\n Pattern is =>\n\n");

        for(r = 1; r <= Cnt+1; r++)
        {
                for(c = 1; c <= Cnt+1; c++)
                {
                        if( r==1 && c >1&& c < Cnt || c==1 && r >1 && r <Cnt || c == Cnt && r>1&& r <Cnt|| r== Cnt&&c>1 && c< Cnt || r==c&&r>=(Cnt+1)/2&&r!= Cnt)
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
