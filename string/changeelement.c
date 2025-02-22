# include<stdio.h>

int main(){

    char greeting[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    greeting[0] = 'J';
    printf("%s", greeting);

    return 0;
}