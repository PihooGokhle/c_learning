# include<stdio.h>

int main(){

    char greeting[] = {"Good Morning"};

    for(int i = 0; i < 12; ++i){
        printf("%c\n", greeting[i]);
    }

    return 0;
}