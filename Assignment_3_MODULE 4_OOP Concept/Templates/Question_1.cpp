//MODULE: 4_OOPS Concept_Templates
/*Question:1_Write a program of to swap the two values using template*/

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) 
{
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int intA, intB;
    double doubleA, doubleB;

    cout<<"Enter two integer values separated by space: ";
    cin>>intA>>intB;
    swapValues(intA, intB);
    cout<<"After swapping integers: "<<intA<<" "<<intB<<endl;

    cout<<"\nEnter two double values separated by space: ";
    cin>>doubleA>>doubleB;
    swapValues(doubleA, doubleB);
    cout<<"After swapping doubles: "<<doubleA<<" "<<doubleB<<endl;

    return 0;
}

