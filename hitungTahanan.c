#include <stdio.h>
#include <stdbool.h>

int main() {

    int a,b,c;

    printf("Masukkan a: ");
    scanf("%d", &a);
    printf("Masukkan b: ");
    scanf("%d", &b);
    printf("Masukkan c: ");
    scanf("%d", &c);

    if(a>=0&b>=0&c>=0) {
        printf("rangkai seri");
    }
    else {
        printf("&d Masukkan tahanan tidak boleh negatif .\n" );
    }

}
