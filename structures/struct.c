# include<stdio.h>
# include<string.h>

struct member{

    int roll;
    char name[100];
};

int main(){

    struct member s1;
    s1.roll = 54;
    strcpy(s1.name, "Pihoo");

    printf("Your roll no. is %d\n", s1.roll);
    printf("Your roll no. is %s\n", s1.name);

    return 0;
}