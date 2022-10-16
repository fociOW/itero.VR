#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <string>
using namespace std;

class ClassNode {
   public:
      string classID;
      string className;
      string day1;
      string day2;
      int startTime;
      int endTime;
      //
      ClassNode *nextNodePtr;
      ClassNode();
      ClassNode(string classID, string className, string day1, string day2, int startTime, int endTime);
      string GetID();
      string GetClassName();
      string GetDay1();
      string GetDay2();
      int GetTime1();
      int GetTime2();
      void PrintClassNode();
};

class Class1 {
   private:
	   ClassNode *head;
	   ClassNode *tail;
      string user;
   public:
      Class1();
      Class1(string u);
      void push_back(string classID, string className, string day1, string day2, int startTime, int endTime);
      void output_all();
};

#endif
