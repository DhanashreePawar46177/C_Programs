#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int Arr[5] = {12, 34, 2, 78, 55};

        printf("\n\n he Value Of 0th Number = %d",Arr[0]);
        printf("\n\n The Value Of 1st Number = %d",Arr[1]);
        printf("\n\n The Value Of 2nd Number = %d",Arr[2]);

        getch();
        system("cls");

        printf("\n\n Enter Value For 0th number = ");
        scanf("%d",&Arr[0]);

        printf("\n\n Enter Value For 3rd number = ");
        scanf("%d",&Arr[3]);

        Arr[0] = 45;
        Arr[3] = 10;
        Arr[5] = 65;

        printf("\n\n The Value Of 0th Number = %d",Arr[0]);
        printf("\n\n the Value Of 1st Number = %d",Arr[1]);
        printf("\n\n The Value Of 2nd Number = %d",Arr[2]);
        printf("\n\n The Value Of 3rd Number = %d",Arr[3]);
        printf("\n\n The Value Of 4th Number = %d",Arr[4]);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
