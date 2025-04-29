#include <iostream>

#include <map>
using namespace std;

int main() {

    map<string, string> orgFiles;

    string file1 = "document.pdf";
    string file2 = "image.png";

    orgFiles.insert({"Documents", file1});

    cout << "File: " << orgFiles["Documents"] << endl;
}