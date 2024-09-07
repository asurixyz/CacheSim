#include<bits/stdc++.h>
using namespace std;

int main(){
    int n  = 50;
    int* ptr = &n;

    cout << "Value of number and address: " << n << " " << &n << "\n";
    cout << "Value of pointer and value at that address : " << ptr << " " << *ptr << "\n";

    //Modifying the value
    *ptr = 100;
    cout << "New value of n : " << n << "\n";

    //Array Pointers
    int arr[5] = {10,20,30,40,50};
    int* arrptr = arr;
    for (int i = 0; i < 5; i++){
        cout << *(arrptr + i) << " ";
    }
    cout << "\n";

    //Null Pointers
    int* nllptr = nullptr;
    cout << "Value of nullpointer : " << nllptr << endl;

    //Dynamic Memory Allocation
    int *dynamicptr = new int(50);
    cout << "Value of dynamic pointer : " << *dynamicptr << "\n";
    delete dynamicptr; //deletes the dynamic pointer
    return 0;
}
