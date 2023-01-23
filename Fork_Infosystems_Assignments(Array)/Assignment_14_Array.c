/// Create, Accept, Display Array Using Loop - With macro, Find Count Of Null[Zero] Elements in That Array.
#include<stdio.h>
#include<conio.h>

#define Count 10
int main()
{
        int i = 0, Z_Cnt = 0;
        int Arr[Count] = {'\0'};

        printf("\n Enter Array Elements => \n");

        for(i = 0; i < Count; i++)
        {
                printf("\n %d Array Element = ",i+1);
                scanf("%d",&Arr[i]);
        }

        getch();
        system("cls");

        for(i = 0; i < Count; i++)
        {
                if(Arr[i] == 0)
                {
                    Z_Cnt++;
                }
        }
        printf("\n Zero Count in Given Array = %d",Z_Cnt);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
