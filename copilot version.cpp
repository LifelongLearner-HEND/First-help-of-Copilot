// This is my first Program written with GitHub Copilot
// Date: 20/10/2022
// Author: Copilot not me for sure ^-^
// Applying on Problem 1-Sheet1-OOP Assignment 1
#include <iostream>
using namespace std;
// create a string function that takes a string and returns a string named "inclusive_speech" and takes a string parameter named "msg"
string inclusive_speech(string msg) {
    // create a string variable names "temp_msg"
    string temp_msg;
    // create an integer variable named "end" and equals the length of the msg parameter - 1
    // create an integer variable called "i" and initialize it with (0)
    int end = msg.length() - 1;
    int i = 0;
    // create awhile loop that runs while i is less than or equal to end
    while (i <= end) {
        // create an if condition that checks if the character at index i in the msg parameter is equal to 'H' and if the character at index i + 1 in the msg parameter is equal to 'e' and if the character at index i + 2 in the msg parameter is equal to ' ' and if the character at index i - 1 is equal to ' ' or i is equal to 0 and the character at index i + 2 is equal to ' '
        if ((msg[i] == 'H' && msg[i + 1] == 'e') && (msg[i + 2] == ' ' && (msg[i - 1] == ' ') || i == 0 && (msg[i + 2] == ' ' || i == end))) {
            // concatenate the temp_msg variable with "He or she"
            temp_msg += "He or she";
            // add 2 to i
            i += 2;
        }
        // create an else if condition
        else if ((msg[i] == 'h' && msg[i + 1] == 'e') && (msg[i + 2] == ' ' && (msg[i - 1] == ' '))) {
            // concatenate the temp_msg variable with "he or she"
            temp_msg += "he or she";
            // add 2 to i
            i += 2;
        }
        // create an if condition that checks if the character at index i in the msg parameter is equal to 'H' and if the character at index i + 1 in the msg parameter is equal to 'i' and if the character at index i + 2 in the msg parameter is equal to 'm' and if the character at index i + 3 in the msg parameter is equal to ' ' and if the character at index i - 1 is equal to ' ' or i is equal to 0 and the character at index i + 3 is equal to ' '
        if ((msg[i] == 'H' && msg[i + 1] == 'i' && msg[i + 2] == 'm') && (msg[i + 3] == ' ' && (msg[i - 1] == ' ') || i == 0 && (msg[i + 3] == ' '))) {
            // concatenate the temp_msg variable with "He or she"
            temp_msg += "Him or her";
            // add 3 to i
            i += 3;
        }
        // create an else if condition
        else if ((msg[i] == 'h' && msg[i + 1] == 'i' && msg[i + 2] == 'm') && (msg[i + 3] == ' ' || msg[i+3] == '.' || msg[i+3] == '?' || msg[i+3] == ',' || msg[i+3] == '!') && (msg[i - 1] == ' ')) {
            // concatenate the temp_msg variable with "he or she"
            temp_msg += "him or her";
            // add 3 to i
            i += 3;
        }
        // create an else eif condition that checks if the character at index i in the msg parameter is equal to 'h' and if the character at index i + 1 in the msg parameter is equal to 'i' and if the character at index i + 2 in the msg parameter is equal to 's'
        else if ((msg[i] == 'h' && msg[i + 1] == 'i' && msg[i + 2] == 's')) {
            // create a nested if condition that checks if the character at index i - 1 in te msg parameter is equal to ' ' and if the character at index i + 3 in the msg parameter is equal to ' ' or if the character at index i + 3 in the msg parameter is equal to '.' or if the character at index i + 3 in the msg parameter is equal to '?' or if the character at index i + 3 in the msg parameter is equal to '!' or if the character at index i + 3 in the msg parameter is equal to ','
            if ((msg[i - 1] == ' ' && (msg[i + 3] == ' ' || msg[i + 3] == '.' || msg[i + 3] == '?' || msg[i + 3] == '!' || msg[i + 3] == ','))) {
                // concatenate the temp_msg variable with "his or her"
                temp_msg += "his or her";
                // add 3 to i
                i += 3;
            }
        }
        // create an else condition
        else {
            // concatenate the temp_msg variable with the character at index i in the msg parameter
            temp_msg += msg[i];
            // add 1 to i
            i++;
        }
    }
    // return the temp_msg variable
    return temp_msg;
}
// create a main function
int main() {
    // create a string variable named "speech"
    string speech;
    // print "Please, enter your speech: \n"
    cout << "Please, enter your speech: \n";
    // get the speech variable
    getline(cin, speech);
    // print "Original speech is : " and the speech variable
    cout << "Original speech is : " << speech << endl;
    // print a split line using "----------------------------------------"
    cout << "----------------------------------------\n" << endl;
    // print "Inclusive speech is : " and the inclusive_speech function with the speech variable as the argument
    cout << "Inclusive speech is : " << inclusive_speech(speech) << endl;
}




















