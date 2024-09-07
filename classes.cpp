#include<bits/stdc++.h>
using namespace std;
//Learning Classes in C++

class Person {
private:
    string name;
    int age;
public :
    Person(string n, int a) : name(n), age(a) {} //Constructor

    void introduce(){
        cout << "My name is " << name << " and I am " << age << " years old" << endl;
    }

    void bday(){
        age++;
    }
    string getName() {return name;} //getter
    void setName(string n){name = n;} //setter
}; //don't forget the semicolon at the end of the class

int main(){
    Person asuri("Asuri", 19);
    asuri.introduce();
    asuri.bday();
    asuri.introduce();
    asuri.setName("Venkat");
    cout << "New name : " << asuri.getName() << endl;
    asuri.introduce();
    return 0;
}