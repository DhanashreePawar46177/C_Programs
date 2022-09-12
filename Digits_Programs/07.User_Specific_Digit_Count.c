#include<stdio.h>
#include<conio.h>

int main()
{
        int r = 0, c = 0,No = 0, D_Cnt = 0,Temp = 0, Search_Dig = 0, Dig = 0;

        Up:

        printf("\n Enter Positive Integer Number = ");
        scanf("%d",&No);

        Temp = No;

        printf("\n Enter Number For Counting = ");
        scanf("%d",&Search_Dig);

        if(No <= 0)
        {
               printf("\n Invalid Number. Please Enter Positive Integer Number.");
               getch();
               system("cls");
               goto Up;
        }


        while(Temp > 0)
        {
                Dig = Temp % 10;
                if(Dig == Search_Dig)
                {
                        D_Cnt++;
                }
                Temp = Temp / 10;
        }

        printf("\n Count Of %d in %d is = %d",Search_Dig,No,D_Cnt);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
