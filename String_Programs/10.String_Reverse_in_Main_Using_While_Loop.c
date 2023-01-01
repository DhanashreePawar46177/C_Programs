#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[20] = {'\0'}, cDest[20] = {'\0'};
        int i = 0, j = 0;

        printf("\n\n Enter a String  = ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
            i++;
        }

        i = i - 1;

        while(i >= 0)
        {
            cDest[j] = cSrc[i];
            j++;
            i--;
        }

        cDest[j] = '\0';

        printf("\n\n=======================================================================");

        printf("\n\n Given String = %s ",cSrc);
        printf("\n\n Reverse Of Given String is = %s",cDest);

        printf("\n\n=======================================================================");
        printf("\n\n Thanks!!!\n");

        getch();
        return 0;
}
