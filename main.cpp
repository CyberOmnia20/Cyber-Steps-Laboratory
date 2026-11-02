#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. فحص حالة الطوارئ (System Lockdown)
    bool isEmergency = false; 

    if (isEmergency) {
        cout << "[-] SYSTEM LOCKDOWN: Access Blocked!" << endl;
    } 
    else {
        // 2. التحقق من السن القانوني (Age Validation)
        int age;
        cout << "Enter your age: ";
        cin >> age;

        if (age < 18) {
            cout << "[-] Access Denied: Minimum age requirement not met." << endl;
        } 
        else {
            // 3. المصادقة والصلاحيات (Authentication & Authorization)
            string password;
            cout << "Enter password: ";
            cin >> password;

            if (password == "Admin123") {
                cout << "[+] Access Granted: Administrator Level." << endl;
            } 
            else if (password == "User123") {
                cout << "[+] Access Granted: Standard User Level." << endl;
            } 
            else {
                cout << "[-] Access Denied: Invalid Password!" << endl;
            }
        }
    }

    return 0;
}
