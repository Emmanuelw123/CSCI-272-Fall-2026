/*
    s
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Using array notation:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << "\n\nUsing pointer arithmetic:"
         << endl;

    for (int i = 0; i < size; i++)
    {
        // Adding i advances by i integer elements,
        // not by i individual bytes.
        cout << *(numbers + i) << " ";
    }

    cout << "\n\nAddresses:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "numbers[" << i << "]"
             << " value = " << numbers[i]
             << ", address = "
             << &numbers[i]
             << endl;
    }

cout << numbers << endl;
cout << &numbers[0]<< endl;

    return 0;
}

/*
    KEY RELATIONSHIPS

        numbers[0] == *numbers

        numbers[1] == *(numbers + 1)

        numbers[2] == *(numbers + 2)


    TRY THIS #1

    Print:

        *numbers

        *(numbers + 3)

        *(numbers + 4)
        
        After I playing around with the pointer arithmetic dereferencing.
        Now, I fully understand to access the number  in a array via their momery address. 

                
    TRY THIS #2

    Compare:

        numbers

    and:

        &numbers[0]

    What do you notice?
After printing out these two values out. I notice that they both print out the same memory address. 
Also, I found out when you print out an name of a array it 
print out the memory address of the first value of the array unless you dereference the pointer value. 

    THINK ABOUT IT

    Why do the addresses of array elements
    appear close together?
    
After doing some research, The reason why the address of array element appear close together is 
becuase they are next to each other in memory. Also, if you notice closely 
each momery address value are only 4 bytes apart. this is due to the fact that in C++ int are only 4 bytes.
    Arrays use contiguous memory locations.
*/
