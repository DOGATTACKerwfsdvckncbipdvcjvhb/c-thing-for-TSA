#include <stdio.h>
#include <math.h>
int orith(int x, int y){
    if(x >= y){
        return 1;
    } else {
        return 0;
    }
}



int main() {
    int x, y;
    
    printf("Enter two numbers, enter space between numbers: ");
    scanf("%d %d", &x, &y);

    int isGreater = orith(x,y);

    if (isGreater == 1) {
        printf("your first number is greater than your last\n");
    } else {
        printf("your first number is not greater than your last\n");
    }
    


    return 0;
}