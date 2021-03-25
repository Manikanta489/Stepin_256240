#include <stdio.h>
struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;   

    printf("Enter age: ");
    scanf("%d", &personPtr->age);4

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", person1.age);
    printf("weight: %f", person1.weight);

    return 0;
}