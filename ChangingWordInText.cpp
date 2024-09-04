//
// Created by OlegMakeienko on 2024-09-04.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void findAndReplace(string& word, const string& toSearch, const string& toReplace) {
    size_t pos = word.find(toSearch);

    while (pos != string::npos) {
        word.replace(pos, toSearch.length(), toReplace);
        pos = word.find(toSearch, pos + toReplace.length());
    }
}

int main() {
    ifstream inputFile;
    inputFile.open("/Users/olegmakeienko/CLionProjects/test/input.txt");

    if (!inputFile.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    } else {
        cout << "Successfully opened file" << endl;
    }

    string word;
    string line;
    while (getline(inputFile, line)) {
        word += line + "\n";
    }
    inputFile.close();

    cout << "Original text:\n" << word << endl;
    string toSearch, toReplace;
    cout << "Enter the word to search for: ";
    cin >> toSearch;
    cout << "Enter the word to replace it with: ";
    cin >> toReplace;

    findAndReplace(word, toSearch, toReplace);

    cout << "Modified text:\n" << word << endl;

    return 0;
}
