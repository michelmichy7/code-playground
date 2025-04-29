#include <iostream>
#include <map>
#include <deque>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;


int main() {
  fs::path path = "./files";

  for (const auto& entry:filesystem::directory_iterator(path)) {
    cout << entry.path().string() << endl;
    cout << entry.path().extension() << endl;
  }
}
