#include <stdio.h>


/*
buatlah struktur dengan nama pelanggan, yang memiliki 2 elemen yaitu nama dan
telepon. setelah itu buat variabel array data_pelanggan berjumlah 3 orang. inputkan
data dari masing-masing pelanggan tersebut dan tampilkan.
*/

struct pelanggan
{
    char nama[20];
    char telepon[20];
};

main()
{
    struct pelanggan data_pelanggan[3];
    int i;
    for(i=0; i<3; i++)
    {
        printf("Nama: ");
        scanf("%s", &data_pelanggan[i].nama);
        printf("Telepon: ");
        scanf("%s", &data_pelanggan[i].telepon);
    }
    for(i=0; i<3; i++)
    {
        printf("Nama: %s, Telepon: %s\n", data_pelanggan[i].nama, data_pelanggan[i].telepon);
    }
    return 0;

}