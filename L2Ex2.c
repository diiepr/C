#include <stdio.h>

int main()
{
    int TAB[8][8]  =  {6, 0, 0, 5, 0, 0, 1, 0,
                      0, 1, 0, 2, 0, 3, 0, 2,
                      0, 1, 1, 1, 0, 1, 0, 0,
                      0, 0, 2, 0, 3, 4, 4, 3,
                      1, 0, 1, 1, 0, 1, 0, 0,
                      0, 0, 1, 3, 0, 4, 0, 1,
                      1, 0, 0, 0, 2, 2, 2, 1,
                      1, 5, 0, 6, 0, 1, 1, 0};
    int TAB2[7] = {0,0,0,0,0,0,0};
    int i, j;
    for (i =  0; i <8; i++)
    {
        for (j = 0; j < 8; j++)
       {
        TAB2[TAB[i][j]]++;
       }
    }
    printf("Peões: %d\n", TAB2[1]);
    printf("Cavalos: %d\n", TAB2[2]);
    printf("Torres: %d\n", TAB2[3]);
    printf("Bispos: %d\n", TAB2[4]);
    printf("Reis: %d\n", TAB2[5]);
    printf("Rainhas: %d\n", TAB2[6]);
    printf("Vazios: %d\n", TAB2[0]);
return 0;
}