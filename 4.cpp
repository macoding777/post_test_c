#include <stdio.h>

/*

ubah program berikut dengan pengiriman pass by reference
#include <stdio.h>
void add_score(int score){
score = score + 5;
}
void main(){
int score = 0;
printf("score sebelum diubah: %d\n", score);
add_score(score);
printf("score setelah diubah: %d\n", score);
}
*/

void add_score(int *score){
*score = *score + 5;
}

main()
{
    int score = 0;
    printf("score sebelum diubah: %d\n", score, &score);
    add_score(&score);
    printf("score setelah diubah: %d\n", score, &score);
}