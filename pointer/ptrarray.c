# include<stdio.h>

int main(){

int numbers[] = {2, 4, 6, 8};

for(int i = 0; i < 4; i++){
    printf("%p\n", &numbers[i]);
}

return 0;

}