#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Dig = 0, Cnt = 0, Temp = 0;

        Up:
        printf("\n Enter Positive Integer Number To Count Of Odd Number = ");
        scanf("%d",&No);

        if(No <= 0)
        {
               printf("\n Invalid Number. Please Enter Positive Integer Number.");
               getch();
               system("cls");
               goto Up;
        }

        Temp = No;
        while(Temp > 0)
        {
                Dig = Temp % 10;

                if(Dig % 2 == 1 && Dig > 0)
                {
                        Cnt++;
                }
                Temp = Temp / 10;
        }
        printf("\n Count Of Odd Numbers in %d is = %d",No,Cnt);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
