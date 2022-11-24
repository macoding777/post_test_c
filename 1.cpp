#include <stdio.h>


/*
Diketahui array angka[10] = { 3, 4, 1, 9, 7, 3, 1, 2, 1, 5}. buat program untuk
menampilkan array tersebut dari belakang

*/

main()
{
    int angka[10] = { 3, 4, 1, 9, 7, 3, 1, 2, 1, 5};
    int i;
    for(i=9; i>=0; i--)
    {
        printf("%d ", angka[i]);
    }
    return 0;
}