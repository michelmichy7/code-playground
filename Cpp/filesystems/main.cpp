#include <iostream>
using namespace std;

#include <filesystem>
#include <deque>

int main() {
    filesystem::path p = "dir";

    deque<string> files = {};

    cout << "Path: " << p << endl;


    if (filesystem::exists(p)) {
        cout << "Exists \n"; 
    }
    
    for (const auto& entry:filesystem::directory_iterator(p)) {
        files.push_back(entry.path().string());
    }

    for (int i = 0; i < files.size(); i++) {
        cout << files[i] << endl;
    }
    
}