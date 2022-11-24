#include <stdio.h>

/*
int a=3, *b, **c;
buat program untuk mencetak alamat dari masing2 variabel beserta isinya

*/

main()
{
    int a=3, *b, **c;
    b = &a;
    c = &b;
    printf("Alamat a: %d, Isi a: %d\n", &a, a);
    printf("Alamat b: %d, Isi b: %d\n", &b, b);
    printf("Alamat c: %d, Isi c: %d\n", &c, c);


}