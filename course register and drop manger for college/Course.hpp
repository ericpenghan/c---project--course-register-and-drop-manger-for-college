//
//  Course.hpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//
#ifndef Course_hpp
#define Course_hpp
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Course {
public:
  void print();
  Course();
  void setId(string newId);
  void setDepartment(string newDepartment);
  void setNumber(string newNumber);
  void setCreHours(int newCreHours);
  void setTitle(string newTitle);
  string getId();
  string getDepartment();
  string getNumber();
  int getCreHours();
  string getTitle();
  
private:
  string id;
  string department;
  string number;
  int creHours;
  string title;
};










#endif /* Course_hpp */
