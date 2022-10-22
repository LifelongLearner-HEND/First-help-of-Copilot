// Author: Hend Ahmed Kamal
// Date: 6/10/2022
// course: CS213 OOP
// Program: Problem 1 - Sheet 1 - Assignment 1
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string inclusive_speech (const string& msg){
    string temp_msg;
    int end = msg.length() - 1;
    int i = 0;
    while (i <= end){
        // Handling "He" and "he" pronoun
        if ((msg[i] =='H' && msg[i+1] == 'e') && ((msg[i-1] == ' ' && msg[i+2] == ' ') || (i == 0 && msg[i+2] == ' ')) ){
                temp_msg += "He or she";
                i += 2;
        }
        else if (msg[i] == 'h' && msg[i+1] == 'e' && msg[i-1] == ' ' && msg[i+2] == ' ') {
            temp_msg += "he or she";
            i += 2;
        }
        // Handling "Him" pronoun
        if ((msg[i] =='H' && msg[i+1] == 'i' && msg[i+2] == 'm') && ((msg[i-1] == ' ' && msg[i+3] == ' ') || (i == 0 && msg[i+3] == ' ')) ){
            temp_msg += "Him or her";
            i += 3;
        }
        // Handling "him" pronoun
        else if (msg[i] == 'h' && msg[i+1] == 'i' && msg[i+2] == 'm'){
            if ((msg[i-1] == ' ') && (msg[i+3] == ' ' || msg[i+3] == '.' || msg[i+3] == '?' || msg[i+3] == '!' || msg[i+3] == ',' )){
                temp_msg += "him or her";
            }
            i += 3;
        }
        // Handling "His" pronoun
        else if (msg[i] == 'H' && msg[i+1] == 'i' && msg[i+2] == 's'){
            if ((i == 0 && msg[i+3] == ' ') || (msg[i-1] == ' ' && msg[i+3] == ' ')) {
                temp_msg += "His or her";
            }
            i += 3;
        }
        // Handling "his" and pronoun
        else if (msg[i] == 'h' && msg[i+1] == 'i' && msg[i+2] == 's'){
            if ((msg[i-1] == ' ') && (msg[i+3] == ' ' || msg[i+3] == '.' || msg[i+3] == '?' || msg[i+3] == '!' || msg[i+3] == ',' )){
                temp_msg += "his or her";
            }
            i += 3;
        }
        else {
            temp_msg += msg[i];
            i++;
        }
    }
    return temp_msg;
}
int main() {
    string speech;
    cout << "Please, enter your speech: \n";
    getline(cin,speech);
    cout << "Original speech is: " << speech << endl;
    cout << "--------------------------------------------------------\n";
    cout << "Converted speech is: " << inclusive_speech(speech);
}
