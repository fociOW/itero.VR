#include <iostream>
#include "Classes.h"

using namespace std;

void menuDisplay(string s) {

   char c;
   Class1 UserClass(s);

   while ((c != 'Q')) {
      cout << "itero.VR" << endl;
      cout << "Software Version: 0.10.1 (alpha)" << endl;
      cout << "Logged in as: " << s << endl;
      cout << endl;
      cout << "OPTIONS:" << endl;
      cout << "1: VIEW CLASSES" << endl;
      cout << "2: ADD NEW CLASS" << endl;
      cout << "3: REMOVE NEW CLASS" << endl;
      cout << "Q: QUIT" << endl;
      cout << endl;

      cout << "Choose an option: " << endl;
      cin >> c;

      if (c == '1') {
         UserClass.output_all();
      }
      else if (c == '2') {
         string classID;
         string className;
         string day1;
         string day2;
         int startTime;
         int endTime;
         cin.ignore();
         cout << "Enter Class ID: ";
         getline(cin, classID);
         cout << "Enter Class Name: ";
         getline(cin, className);
         cout << "Enter Day 1: ";
         getline(cin, day1);
         cout << "Enter Day 2: ";
         getline(cin, day2);
         cout << "Enter start time: ";
         cin >> startTime;
         cout << "Enter end time: ";
         cin >> endTime;

         UserClass.push_back(classID, className, day1, day2, startTime, endTime);

      }
      else if (c == '3') {
         cout << "3" << endl;
      }
      else if (c == 'Q') {
         exit(1);
      }
      else {
         cout << "Invalid choice! Please try again!" << endl;
      }
   }

}

int main() {
   string userString;
   string userPass;
   cout << "Username: ";
   getline(cin, userString);
   cout << "Password: ";
   getline(cin, userPass);
   cout << endl;

   cout << "Welcome: " << userString << endl << endl;

   menuDisplay(userString);

   return 0;

}
