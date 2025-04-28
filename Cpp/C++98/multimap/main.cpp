#include <iostream>
#include <map>
#include <deque>

using namespace std;

int main() {
    multimap<string, string> orgFiles;

    string extension;

    deque<string> listFiles;

    orgFiles.insert({"Documents", file1});
    orgFiles.insert({"Images", file2});
    orgFiles.insert({"Documents", file3});

    for (auto file : orgFiles) {
        cout << file.first << " is: " << file.second << endl;
    }
}
