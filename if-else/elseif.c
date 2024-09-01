# include<stdio.h>

int main(){

    int marks;

    printf("enter marks");
    scanf("%d" , &marks);

    if( marks > 80 ){
        printf("excellent\n");
    }
    else if( marks < 80 && marks > 50 ){
        printf("good\n");
    }
    else{
        printf("keep it up\n");
    }

    printf("thankyou\n");

    return 0;

}