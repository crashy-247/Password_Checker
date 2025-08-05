#include <iostream>
#include <string>
using namespace std;

void passwordcheck(string password); // Defines the function called by main

// This is where the user will input the password
int main() {
    string password;
    cout << "Please enter a password: " << endl;
    cin >> password;

    passwordcheck(password);

    return 0;
}

// This function takes the input from main and checks to ensure it meets the specified standards
void passwordcheck(string password) {
    int upper = 0, lower = 0, numbers = 0, special = 0;
    int length = password.length();

    if (length < 8 || length > 64) {
        cout << "Password must be between 8 and 64 characters" << endl;
        return;
    }

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
        upper++;
        }
        else if (islower(password[i])) {
        lower++;
        }
        else if (isdigit(password[i])) {
        numbers++;
        }
        else special++;
    }

    if (upper && lower && numbers && special) {
        if (length >= 15)
            cout << "Password strength is strong" << endl;
        else
            cout << "Password strength is medium" << endl;
    } 
    else {
        if (upper==0) {
            cout << "Password must contain at least one uppercase character!" << endl;
        }
        if (lower==0) {
            cout << "Password must contain at least one lowercase character!" << endl;
        }
        if (numbers==0) {
            cout << "Password must contain at least one number!" << endl;
        }
        if (special==0) {
            cout << "Password must contain at least one special character!" << endl;
        }
    }

}
