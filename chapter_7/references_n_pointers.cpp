#include <iostream>
using namespace std;

void function1(){
    int value = 7;
    int* ptr = nullptr;
    ptr = &value;
    cout << "wert von value: " << *ptr << endl;
    cout << "adresse von value:" << ptr << endl;
    cout << "adresse von ptr" << &ptr << endl;
}

int main(int argc, char const *argv[])
{
    int ref = 7;
    int &ref1 = ref;
    int &ref2  {ref}; 
    int *pointer = &ref1;
    //cout << "adresse von: ref1: " << &ref1 << " wert von ref1: " << ref1 << endl
    //<< "adresse von ref: " << &ref << endl;
    //cout << "die adresse von ref: " << &ref << " vs die Adresse vom pointer: " << &pointer <<endl
   //  << " vs die Adresse worauf der Zeiger zeigt! " << pointer <<endl;
   function1();
    return 0;
}
