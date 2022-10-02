#include<stdio.h>
#include<conio.h>

int main()
{
        int Arr[7] = {}, i = 0, E_Cnt = 0;

        printf("\n\n Enter Array Elements For Finding Zero Count.");
        for(i = 0; i < 7; i++)
        {
                printf("\n\n Enter %d Element = ",i+1);
                scanf("%d",&Arr[i]);
        }

        for(i = 0; i < 7; i++)
        {
                if(Arr[i] % 2 == 0)
                {
                    E_Cnt++;
                }
        }
        printf("\n\n The Count Of Even Numbers in Given Array = %d",E_Cnt);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
