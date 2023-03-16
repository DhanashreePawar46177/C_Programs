#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] = {'\0'},cDest[50] = {'\0'};
        int i = 0;

        printf("\n\n Enter a String for Converting Uppercase = ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
                if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
                {
                        cDest[i] = cSrc[i] - 32;
                }
                else
                {
                    cDest[i] = cSrc[i];
                }
                i++;
        }

        printf("\n Converted String is = %s",cDest);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
