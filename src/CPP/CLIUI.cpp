#include <iostream>
using namespace std;

void printQuestion(string question) {
    cout << question << "\n";
}

//int printAndReturnOptions(string options[]) {

//}

int intInput() {
    int input;
    cin >> input;
    return input;
}

float floatInput() {
    float input;
    cin >> input;
    return input;
}

string stringInput() {
    string input;
    cin >> input;
    return input;
}

int main() {
    printQuestion("type in a integer");
    int input;
    input = intInput();
    cout << input;
    return 0;
}