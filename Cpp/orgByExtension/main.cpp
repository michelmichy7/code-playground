#include <iostream>
#include <map>
#include <map>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;


int main() {
  fs::path path = "./Files";


    multimap<string, string> filesList;
    multimap<string, string> organizedFiles;

    for (const auto& entry : fs::directory_iterator(path)) {
      filesList.emplace(entry.path().filename(), entry.path().extension().string());
    }

    for (const auto& file : filesList) {
      if (file.second == ".pdf" || file.second == ".txt") {
        organizedFiles.emplace(file.first, "Documents");
      }

      else if (file.second == ".mp3" || file.second == ".wav" || file.second == ".m4a") {
        organizedFiles.emplace(file.first, "Music");
      }

      for (const auto& orgFile : organizedFiles) {
        cout << orgFile.first << ", " << orgFile.second << endl;
      }
    }
  }