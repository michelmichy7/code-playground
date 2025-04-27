#include <iostream>
#include <map>

using namespace std;

int main() {
    multimap<string, string> orgFiles;

    string file1 = "document,pdf";
    string file2 = "image.jpg";
    string file3 = "document2.pdf";

    orgFiles.insert({"Documents", file1});
    orgFiles.insert({"Images", file2});
    orgFiles.insert({"Documents", file3});

    for (auto file : orgFiles) {
        cout << file.first << " is: " << file.second << endl;
    }
}