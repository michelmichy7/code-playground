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
      filesList.emplace(entry.path().filename().string(), entry.path().extension().string());
    }

    for (const auto& file : filesList) {
      if (file.second == ".pdf" || file.second == ".txt") {
        organizedFiles.emplace(file.first, "Documents");

        create_directory(path / "Documents");
        copy_file(path / file.first, path / "Documents" / file.first);
      }

      else if (file.second == ".mp3" || file.second == ".wav" || file.second == ".m4a") {
        organizedFiles.emplace(file.first, "Music");

        create_directory(path / "Music");
        copy_file(path / file.first, path / "Music" / file.first);
      }

      for (const auto& orgFile : organizedFiles) {
        cout << orgFile.first << ", " << orgFile.second << endl;
      }
    }
  }