#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;

int main()
{
    string n, name;
    char operation;
    int a,b;
    float sum, subtraction, multiplication, division;

    cout << "~~~~~~~~~~~~~~CALCULATOR~~~~~~~~~~~~~~~" << endl;
    cout << "Hi there! What's your name?" << endl << "> ";
    cin >> name;
    Sleep(500);

    cout << "Nice to meet you, " << name << "!" << endl;
    cout << endl;

    Sleep(1000);
    cout << "What operation would you like to perform?" << endl;
    cout << endl;

    cout << "  + for addition" << endl << "  - for subtraction" << endl << "  * for multiplication" << endl << "  / for division" << endl;
    Sleep(500);

    cout << endl << "Enter the operation symbol: " << endl << "> ";
    cin >> operation;
    cout << endl;

    Sleep(800);
    cout << "Enter the first number: ";
    cin >> a;
    cout << endl;
    Sleep(500);
    cout << "Enter the second number: ";
    cin >> b;

    Sleep(1000);
    cout << endl << "Calculating...." << endl << endl;

    Sleep(1000);
    switch (operation){
        case '+':
            sum = a+b;
            cout << "Results: " << sum << endl;
            break;
        case '-':
            subtraction = a - b;
            cout << "Results: " << subtraction << endl;
            break;
        case '*':
            multiplication = a * b;
            cout << "Results: " << multiplication << endl;
            break;
        case '/':
            division = a / b;
            cout << "Results: " << division << endl;
            break;
        default:
            cout << "Invalid Operation!" << endl;
            break;
    }



    return 0;
}
