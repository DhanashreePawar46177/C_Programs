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
                        if(c == 1 || r + c == (Cnt +1)/2+1 || r-c==(Cnt +1)/2-1 && c <= (Cnt+1)/2)
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

