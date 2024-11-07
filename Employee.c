/*Author: Alphonce kiplangat 

Date:10/11/2024

*/

#include<stdio.h>

#include <string.h>



// Define the structure

struct Employee {

    char name[25];

    int id;

    char department[20];

    float salary;

    char email[50];

};



int main() {

    // Declare and initialize the structure variable

    struct Employee emp = {

        "John Doe",

        12345,

        "Human Resources",

        50000.50,

        "john.doe@company.com"

    };



    // Print the values of the fields

    printf("Name: %s\n", emp.name);

    printf("ID: %d\n", emp.id);

    printf("Department: %s\n", emp.department);

    printf("Salary: %.2f\n", emp.salary);

    printf("Email: %s\n", emp.email);



    return 0;

}