# include<stdio.h>

int calculatesum(int x, int y){
    int sum = x + y;
    printf("Sum of x and y is %d", sum);
    return sum;
}

int main(){

    int x,y;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    calculatesum(x, y);

    return 0;
}

 