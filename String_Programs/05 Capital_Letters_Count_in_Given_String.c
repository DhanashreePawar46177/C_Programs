#include<stdio.h>
#include<conio.h>>

int main()
{
        char cSrc[50] = {'\0'};
        int Cnt = 0, i = 0;

        puts("\n Enter a String.");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
                if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
                {
                    Cnt++;
                }
                i++;
        }

        printf("\n The Capital Letters Count in Given String = %d",Cnt);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}