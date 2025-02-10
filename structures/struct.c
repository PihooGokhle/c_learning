# include<stdio.h>
# include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 2345;
    s1.cgpa = 7.9;
    strcpy(s1.name, "pihoo");

    printf("student name = %s\n", s1.name);
    printf("student roll no. = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    return 0;

}