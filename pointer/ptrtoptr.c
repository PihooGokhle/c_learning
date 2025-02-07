# include<stdio.h>

int main(){

    int age = 18;
    int *ptr = &age;
    int **pptr = &ptr;

    printf("Value at pointer is %d\n", &age);
    printf("Value at pointer is %d\n", &ptr);
    printf("Value at pointer is %d\n", &pptr);

    return 0;
}