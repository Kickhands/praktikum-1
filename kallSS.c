#include <stdio.h>
#include <stdbool.h>

int main() {
//kamus
    int iA,iB ;
    char o ;
    float t ;
    char trash ;
//input
    printf ("masukkan nilai iA : ");
    scanf("%d",&iA);
    printf ("masukkan nilai iB : ");
    scanf("%d",&iB);
    printf ("masukan operasi");
    scanf("%c",&trash);
    scanf("%c",&o);
//Algoritma
    switch(o){
    case 'a':
        printf("%d", iA+iB);
        break;
    case 'b':
        printf("%d", iA-iB);
        break;
    case 'c':
        printf("%d", iA*iB);
        break;
    case 'd':
        t=iA/iB;
        printf("%f", t);
        break;
    case 'e':
        printf("%d", iA/iB);
        break;
    case 'f':
        printf("%d", iA%iB);
        break;

    default:
        printf("Bukan Pilihan Menu");

    return 0 ;
     }
}


