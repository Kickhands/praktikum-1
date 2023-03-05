#include <stdio.h>
#include <stdbool.h>

int main () {
//kamus
    int a,b,c ;
//input
    printf ("masukkan nilai a : ");
    scanf("%d",&a);
    printf ("masukkan nilai b : ");
    scanf("%d",&b);
    printf ("masukkan nilai c : ");
    scanf("%d",&c);
//Algoritma
    if (a<=0 || b<=0 || c<=0) {
        printf("Terdapat nilai yang bukan segitiga.\n");}
    else if (a!=b & b!=c & a!=c) {
        printf("Segitiga Sembarang .\n");}
    else if (a==b & b!=c || b==c & c!=a || c==a & c!=b ) {
        printf("Segitiga Sama Kaki.\n");}
    else if(a==b & b==c & c==a) {
        printf("Segitiga Sama sisi.\n");}

}

