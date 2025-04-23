#include <iostream>

//include list source
#include <deque>

using namespace std;

void mngFun() {

    deque<string> names = {"Janko", "Anicka", "Marta"};

    names.push_back("Fero");
    names.pop_back();

    for (string name : names) {
        cout << name << endl;
    } 

    
}

