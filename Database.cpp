#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // create your database
    map<string, string>dict = { 
    {"Harry", "TreatPeopleWithKindness"}, 
    {"Zain", "ICanDoThisForever"}, 
    {"Liam", "Remember"}, 
    {"Niall", "NiceToMeetYa"}, 
    {"Louis", "Always_YOU"}
    
    };


    string username, password;
    cout<<"Enter username: "<<endl;
    cin>>username;
    cout<<"Enter password: "<<endl;
    cin>>password;
    // Check if provided username and password matches with the one in database
    if(dict.find(username) != dict.end() && dict[username] == password) {
        cout<<"Login Successfully!";
    } else {
        cout<<"Invalid Credentials";
    }
    return 0;
}
