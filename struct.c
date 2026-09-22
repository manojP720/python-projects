#include <stdio.h>
#include <string.h>

struct Employee {

    int id;
    char name[100];
    float salary;
};

void main ()
{
    struct Employee e1;
    struct Employee e2;


    e1.id = 1;
    strcpy(e1.name, "John Doe");

    e1.salary = 50000.0;

    printf("%s \n", e1.name);
    printf("%d \n", e1.id);
    printf("%f \n", e1.salary);

}