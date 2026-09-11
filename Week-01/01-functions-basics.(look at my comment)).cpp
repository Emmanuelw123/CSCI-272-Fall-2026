
#include <iostream>
using namespace std;

// Function definition
double divide(double a, double b)
{
    if (b == 0)
    {
        cout << "Error: Cannot divide by zero." << endl;
        return 0;
    }

    return a / b;
}

int main()
{
    double num1 = 10;
    double num2 = 5;

    // 10 and 5 are arguments.
    // a and b inside divide() are parameters.
    double result = divide(num1, num2);

    cout << "Result: " << result << endl;

    return 0;
}

/*
    TRY THIS #1

    Change:

        num1 = 10
        num2 = 5

    to different values.

    Predict the result before running the program.
    
    I predict the result I will be 2 because you are dividinig 10 by 5

    TRY THIS #2

    Change num2 to 0.

    What happens?
    Why does the function check:

        if (b == 0)
    
    This function check if the result of is zero 
    becacue in C++ if a number divides to zero the result it will cause Undefined behavior.


    TRY THIS #3

    Call the function multiple times:

        cout << divide(20, 4) << endl;
        cout << divide(100, 10) << endl;
        cout << divide(7, 2) << endl;

    Notice how the same function can be reused.
    
    After trying this example  I was able to completely understand 
    how function can be reused.
*/
