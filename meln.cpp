#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void help() {
    cout << "this command isnt as helpful as you think\n" << endl;
}

int main() {
    string command;
    
    cout << "maybe not vibecoded, who knows?" << endl << "very totally useful application" << endl;

    while (true) {
        cout << "> ";
        cin >> command;

        if (command == "exit") {
            cout << "aight bro!" << endl;
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
                    cout << line << endl;
                }
                file.close();
                cout << endl;
            } else {
                cout << "Error: Could not find or open 'debian.txt'.\n" << endl;
            }
        }
        else {
            cout << "yo dude thats not a command.\n\n";
            help();
        }
    }

    return 0;
}