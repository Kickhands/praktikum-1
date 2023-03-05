#include <stdio.h>
#include <stdbool.h>

 int main() {
    //Kamus
    int i;
    printf("Masukkan sebuah bilangan:.\n ");
    //Algoritma
    if (scanf("%d", &i)){
        if (i > 0) {
            printf("%d, adalah bulat positif.\n", i);
    }
                else if (i == 0) {
                    printf("%d adalah nol.\n", i);
    }
                        else if (i < 0) {
                            printf("%d adalah bulat negative.\n", i);
    }
}
                else {
                    printf(" bukan merupakan sebuah bilangan.\n");
    }
    return 0;
}

