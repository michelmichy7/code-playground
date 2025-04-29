#include <iostream>
#include <map>
#include <map>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;


int main() {
  fs::path path = "./Files/";


    multimap<string, string> filesList;

  for (const auto& entry : fs::directory_iterator(path)) {
    cout << "File: " << entry.path().extension().string << endl;
  }
}