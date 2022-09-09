#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0;


         printf("\n Pattern is => \n\n");

         for(r = 1; r <= 9; r++)
         {
                for(c = 1; c <= 5; c++)
                {
                    if(r == 9 || c == 1)
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
}
