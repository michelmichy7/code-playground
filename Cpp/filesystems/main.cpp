#include <iostream>
using namespace std;

#include <filesystem>

int main() {
    filesystem::path p = "dir";

    cout << "Path: " << p << endl;


    if (filesystem::exists(p)) {
        cout << "Exists"; 
    }
    
    for (const auto& entry:filesystem::directory_iterator(p)) {
        cout << entry.path() << endl;
    }
}