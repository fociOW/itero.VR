#include <iostream>
#include <string>
using namespace std;

#include "Classes.h"

ClassNode::ClassNode() {
   classID = "NULL";
   className = "NULL";
   day1 = "NULL";
   day2 = "NULL";
   startTime = 0;
   endTime = 0;
}

ClassNode::ClassNode(string classID_1, string className1_1, string day1_1, string day2_1, int startTime_1, int endTime_1) {
   classID = classID_1;
   className = className1_1;
   day1 = day1_1;
   day2 = day2_1;
   startTime = startTime_1;
   endTime = endTime_1;
}


string ClassNode::GetID() {
   return classID;
}

string ClassNode::GetClassName() {
   return className;
}

string ClassNode::GetDay1() {
   return day1;
}

string ClassNode::GetDay2() {
   return day2;
}

int ClassNode::GetTime1() {
   return startTime;
}

int ClassNode::GetTime2() {
   return endTime;
}

void ClassNode::PrintClassNode() {
   cout << "Class ID: " << GetID() << endl;
   cout << "Class Name: " << GetClassName() << endl;
   cout << "Days: " << GetDay1() << "/" << GetDay2() << endl;
   cout << "Time: " << GetTime1() << "-" << GetTime2() << endl;
   cout << endl;
}

Class1::Class1() {
   head = nullptr;
   tail = nullptr;
   user = "none";
}

Class1::Class1(string u) {
   head = nullptr;
   tail = nullptr;
   user = u;
}

void Class1::push_back(string classID_1, string className1_1, string day1_1, string day2_1, int startTime_1, int endTime_1) {
   ClassNode *temp = new ClassNode(classID_1, className1_1, day1_1, day2_1, startTime_1, endTime_1);
   if (head == nullptr) {
      head = temp;
   }
   else {
      tail->nextNodePtr = temp;
   }

   tail = temp;
}

void Class1::output_all() {

   if (head == nullptr) {
      cout << "Playlist is empty" << endl;
   }

   else {

      cout << endl;

      ClassNode *temp;
      temp = head;
      int listNum = 1;

      while (temp != nullptr) {
         cout << listNum << "." << endl;
         temp->PrintClassNode();
         if (temp->nextNodePtr != nullptr) {
            cout << endl;
         }
         temp = temp->nextNodePtr;
         listNum = listNum + 1;
      }

   }
}

