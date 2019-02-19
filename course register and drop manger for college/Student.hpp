//
//  Student.hpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student {
public:
  void print();
  Student();
  void setId(string newId);
  void setTotalCreHours(int newCreHours);
  void setLastName(string newLastNam);
  void setFirstName(string newFirstName);
  string getId();
  int getTotalCreHours();
  string getLastName();
  string getFirstName();
  
private:
  string id;
  string firstName;
  string lastName;
  int TotalCreHours;
  
};








#endif /* Student_hpp */
