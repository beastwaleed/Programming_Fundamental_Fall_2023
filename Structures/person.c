#include<stdio.h>

struct person {
    char name[30];
    int age;
    int salary;
};

int main() {
    struct person first, second, third;

    printf("Enter Name of First Person: ");
    scanf("%[^\n]%c", first.name); 
    printf("Enter Age of First Person: ");
    scanf("%d", &first.age);

    printf("Enter Salary of First Person: ");
    scanf("%d", &first.salary);

    printf("Enter Name of Second Person: ");
    scanf(" %[^\n]%c", second.name);

    printf("Enter Age of Second Person: ");
    scanf("%d", &second.age);

    printf("Enter Salary of Second Person: ");
    scanf("%d", &second.salary);

    printf("Enter Name of Third Person: ");
    scanf(" %[^\n]%c", third.name);

    printf("Enter Age of Third Person: "); 
    scanf("%d", &third.age);

    printf("Enter Salary of Third Person: ");
    scanf("%d", &third.salary);

    printf("Name\t| Age\t| Salary\n\n");

    printf("%s\t%d\t%d\n", first.name, first.age, first.salary);
    printf("%s\t%d\t%d\n", second.name, second.age, second.salary);
    printf("%s\t%d\t%d\n", third.name, third.age, third.salary);

    return 0;
}
