#include <iostream>
using namespace std;

#include <filesystem>

int main() {
    filesystem::path p = "dir";

    filesystem::remove(p);

    cout << "Path: " << p << endl;

    if (filesystem::exists(p)) {
        cout << "Exists"; 
    }
    
}