

// C++ program to show Arrow operator
// used in structure
#include <iostream>
#include "my_class.h"
#include "math_constants.h"

//using namespace std;
using namespace N;
using namespace std;
using namespace math_consts;

// Creating the structure
struct student {
    char name[80];
    int age;
    float percentage;
};

// Creating the structure object
struct student* emp = NULL;
struct student* emp_2 = NULL;

// Driver code
int main()
{
    my_class mc;
    mc.do_something();

    your_class yc;
    yc.do_nothing();

    cout << "PI: " << math_consts::pi << endl;
    cout << "PHI: " << math_consts::phi << endl;
    cout << "Gravity: " << math_consts::gravity << endl;
    cout << pi + gravity << endl;

    cout << "I'm changing gravity" << endl;
    math_consts::gravity = 8;
    cout << "Gravity: " << math_consts::gravity << endl;

    /*
    * Practicing comments
    *
    */
    // Assigning memory to struct variable emp
    emp = (struct student*)
        malloc(sizeof(struct student));

    emp_2 = (struct student*)malloc(sizeof(struct student));
    emp_2->percentage = 0.4;

    // Assigning value to age variable
    // of emp using arrow operator
    emp->age = 18;

    // Printing the assigned value to the variable
    cout <<" "<< emp->age << endl;
    cout <<" "<< emp_2->percentage << endl;
    free(emp);
    return 0;
}
