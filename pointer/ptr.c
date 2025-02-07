# include<stdio.h>

int main(){

    int age = 18;
    int *ptr = &age;
    int _age = *ptr;

    printf("Value at age is %p\n", &age);   
    printf("Value at age is %p\n", ptr);
    printf("Value at age is %d\n", &ptr);

    return 0;

}