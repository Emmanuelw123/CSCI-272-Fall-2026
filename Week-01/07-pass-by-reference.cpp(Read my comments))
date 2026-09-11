/*
I answer your questions in my comment below the code 
*/

#include <iostream>
using namespace std;

void changeValue(int& number)
{
    number = 100;
    cout << "Address of value: " << &number << endl;
}

void increment(int& number)
{
    number++;
}

void swapValues(int& a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int value = 10;
  
    cout << "Before changeValue: "
         << value << endl;
    cout << "Address of value: "  << &value << endl;
 
    cout << "After changeValue: "
         << value << endl;
cout << "Address of value: " << &value << endl;

    increment(value);

    cout << "After increment: "
         << value << endl;
         cout << "Address of value: " << &value << endl;


    int x = 5;
    int y = 20;

    cout << "\nBefore swap:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swapValues(x, y);

    cout << "\nAfter swap:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

/*
    TRY THIS #1

    Remove the & from:

        void changeValue(int& number)

    Run the program again.

    What changes?
    What changes was that the output was 10 and then 11 instead of 100 and then 101
    because of the pass by reference symbol was gone"&"". So, the function chnageValue never change the value to 100? 

    TRY THIS #2

    Remove the & characters from swapValues().

    Does the swap still work outside the function?
    No, the swap doesn't work without the pass by references symbol because 
    to swap the values you would need a temp value and 
    since you need a temp value you would need to make sure the value is able to get modifyed 

    TRY THIS #3

    Print:

        &value

    inside main() and:
a
        &number

    inside changeValue().

    Compare the addresses.

   After I try this execise I realized that each of the number has the same address memory address. 
   Because the only thing that's being change is the value not the memory address of the value. 
    QUESTION

    Why is pass by reference useful when a
    function needs to modify the original data?
    A pass by reference is useful when you need to modify the orignal value 
    because instead of making a copy of the same value it keep the oringal and  modify it.
    This is important in bigger application when you don't want to waste memory and
    when you need to keep a modify a specfic value.
*/
