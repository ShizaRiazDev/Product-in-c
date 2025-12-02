#include <stdio.h>

int multiply(int x, int y){
    return x * y;
}

int main(){
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    int product = multiply(x, y);
    printf("Product = %d\n", product);

    return 0;
}
