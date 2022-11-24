#include <stdio.h>

/*

buatlah struktur dengan nama lingkaran, yang memiliki 2 elemen yaitu jari-jari dan luas.
buat variabel array data_lingkaran berjumlah 3 buah. inputkan data dari masing-masing
lingkaran, dimana perhitungan luasnya diperoleh dari L = 3.14 x jari-jari x jari-jari..
kemudian tampilkan
*/

struct lingkaran
{
    float jari_jari;
    float luas;
};

main()
{
    struct lingkaran data_lingkaran[3];
    int i;
    for(i=0; i<3; i++)
    {
        printf("Jari-jari: ");
        scanf("%f", &data_lingkaran[i].jari_jari);
        data_lingkaran[i].luas = 3.14 * data_lingkaran[i].jari_jari * data_lingkaran[i].jari_jari;
    }
    for(i=0; i<3; i++)
    {
        printf("Jari-jari: %f, Luas: %f\n", data_lingkaran[i].jari_jari, data_lingkaran[i].luas);
    }
    return 0;

}