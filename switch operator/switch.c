#include<stdio.h>

int main(){

    int age;

    printf("enter age");
    scanf( "%d" , &age );

    switch(age){
        case 1 : printf("A");
        break;
        case 2 : printf("B");
        break;
        case 3 : printf("C");
        break;
        case 4 : printf("D");
        break;
        case 5 : printf("E");
        break;
        case 6 : printf("F");
        break;
        case 7 : printf("G");
        break;
        default : printf("not valid");

        return 0;
    }
}