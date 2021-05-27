//Pointers & Derefrencing.

#include <iostream>
using namespace std;
int main() {
    // creating a variable of int data type.
    int x = 5;
    int *xptr = &x;
    
    // Printing the value & address in different cases:
    cout<<"Case(1) &x " << &x <<endl;
    cout<<"Case(2) *xptr " << *xptr <<endl;
    cout<<"Case(3) *(&x) "<< *(&x) <<endl;
    cout<<"Case(4) *(xptr) "<< *(xptr) <<endl;
    cout<<"Case(5) *(&xptr) "<< *(&xptr) <<endl;
    cout<<"Case(6) &(*xptr) "<< &(*xptr) <<endl;
    
    //Address of our pointer.
    cout<<"Case(6) &xptr "<< &xptr <<endl;
    //Double Pointer:
    // Now we will see we can also store the address of our &xptr into another bucket.
    int **xxptr = &xptr;
    //Stored the value in next bucket.
    cout<<"Address of *xptr "<< xxptr<< endl;
    cout<<"Value of **xptr "<< **xxptr <<endl;
    return 0;
    