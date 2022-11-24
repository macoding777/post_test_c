#include <stdio.h>


/*

Diketahui matriks diagonal [3][3] = { {0, 0, 0}, {0,0,0}, {0,0,0}} . ubahlah nilai matriks
tersebut sehingga menjadi matriks diagonal, dimana nilai matriks yang terletak pada
garis diagonal bernilai 1
*/

int main()
{
    int matriks[3][3] = { {0, 0, 0}, {0,0,0}, {0,0,0}};
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i == j)
            {
                matriks[i][j] = 1;
            }
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    return 0;
}