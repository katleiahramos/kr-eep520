#include <iostream>
#include <vector>

int main(){
    int *ptr = NULL;

    // allocate memory dynamically for an int
    ptr = new int;
    // alternatively, int *ptr = new int;

    //store 12 in the new memory we created
    *ptr = 12;

    // display value stored

    // deallocate mem just created

    delete ptr;
}