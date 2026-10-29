#include <iostream>
#include <string>

using namespace std;

int main() {
    // CyberStepsAcademy - Cyber Steps Laboratory
    // Challenge #01 Starter Code
    
    cout << "==========================================" << endl;
    cout << "   WELCOME TO CYBER STEPS LAB SYSTEM     " << endl;
    cout << "==========================================" << endl;

string Username;
string cyberField;

cout<<" enter your Username "<<endl;
getline(cin, Username);

cout<<"_______________________\n";

cout << " enter your cyberField  "<<endl;
getline (cin, cyberField);


cout<<"________________________________________________\n";
cout << "Welcome to CyberStepsAcademy!" << endl;
cout<<"Username ="<<Username<<endl;
cout<<"cyberField ="<<cyberField<<endl;

return 0;
}
