/// Create, Accept, Display Array Using Loop - with macro, Find Maximum & Minimum Element in that array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Count 10
int main()
{
        int i = 0;
        int Arr[Count] = {'\0'};

        for(i = 0; i < Count; i++)
        {
                printf("\n Enter Array Elements = ");
                scanf("%d",&Arr[i]);
        }
        int Min_Ele = Arr[0],Max_Ele = Arr[0];

        getch();
        system("cls");

        for(i = 0; i < Count; i++)
        {
                if(Arr[i] > Max_Ele)
                {
                       Max_Ele = Arr[i];
                }
                else if(Arr[i] < Min_Ele)
                {
                        Min_Ele = Arr[i];
                }
        }
        printf("\n\n Minimum Element in Array = %d.\n\n Maximum Element in Array = %d.",Min_Ele,Max_Ele);

        printf("\n\n Thanks !!!\n");
        getch();
        return 0;
}
