#include <stdio.h>


/*
Diketahui array angka [10] = {‘D’, ‘E’, ‘K’, ‘E’, ‘T’, ‘P’, ‘E’, ‘N’, ‘S’, ‘E’}. buat program untuk
menghitung jumlah huruf E pada array tersebut.
*/

main()
{
    char angka[10] = {'D', 'E', 'K', 'E', 'T', 'P', 'E', 'N', 'S', 'E'};
    int i;
    int jumlah = 0;
    for(i=0; i<10; i++)
    {
        if(angka[i] == 'E')
        {
            jumlah++;
        }
    }
    printf("Jumlah huruf E adalah %d", jumlah);
    return 0;
}