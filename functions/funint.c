# include<stdio.h>

int sum(int x, int y);

int main(){

    int a,b;
    printf("Enter a: ");
    scanf("%d", &a);
   
    printf("Enter b: ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("sum of two numbers is %d", s);

    return 0;

}

int sum(int x, int y){
    return x + y;
}