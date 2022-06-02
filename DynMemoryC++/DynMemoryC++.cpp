#include <iostream>
using namespace std;
int main()
{
    int* dynNumber = new int; //allocating memory for int variable
    cout << "dynNumber is: " << *dynNumber << endl; //should show scrap value from heap
    cout << "give number: ";
    cin >> *dynNumber; //user writing directly into the dynamic variable
    cout << "dynNumber is: " << *dynNumber << endl; //should show user's input
    delete dynNumber; //realeasing allocated memory
    int arrSize;
    cout << "Give array size: ";
    cin >> arrSize;
    int* dynNumberArr = new int[arrSize]; //allocating memory for int array
    cout << "Second of dynNumberArr (using []) is: " << dynNumberArr[1] << endl; //should show scrap from heap
    cout << "Second of dynNumberArr (using *) is: " << *(dynNumberArr + 1) << endl; //should show the same number
    for (int i = 0; i < arrSize; i++) //As far as I know you can't get size of dynamic array with any function, so it's important to store it yourself
    {
        dynNumberArr[i] = (rand() % 100) + 1; //filling every element of dynamic array with random number from 1 to 100
        cout << "element " << i + 1 << " out of " << arrSize << " is: " << dynNumberArr[i] << endl; //showing every element of dynamic array
    }
}
