#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void help() {
    cout << "this command isnt as helpful as you think\n";
}

int main() {
    string command;
    cout << "maybe not vibecoded, who knows?\n" << "very totally useful application\n";

    while (true) {
        cout << "> ";
        cin >> command;

        if (command == "exit") {
            cout << "aight bro!\n";
            break;
        } 
        else if (command == "help") {
            help();
        } 
        else if (command == "debian") {
            ifstream file("debian.txt");
            if (file.is_open()) {
                string line;
                while (getline(file, line)) {
                    cout << line << "\n";
                }
                file.close();
                cout << endl;
            } else {
                cout << "Error: Could not find or open 'debian.txt'.\n";
            }
        }
        else {
            cout << "yo dude thats not a command.\n";
            help();
        }
    }

    return 0;
}