#include <stdio.h>

int Policz(int a, int b){
    return a+b;
}

int main() {
    printf("P1v2!\n");
    printf( "W pierwszym branchu: 2+3= %d", Policz(2,3));
    return 0;
}
