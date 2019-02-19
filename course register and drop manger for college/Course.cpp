//
//  Course.cpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#include "Course.hpp"
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

Course::Course(){
  id = "";
  department = "";
  number = "";
  creHours = 0;
  title = "";
}

void Course::setId(string newId){
  id = newId;
}

void Course::setDepartment(string newDepartment){
  department = newDepartment;
}

void Course::setNumber(string newNumber){
  number = newNumber;
}

void Course::setCreHours(int newCreHours){
  if(newCreHours < 0){
    creHours = 0;
  }
  else
    creHours = newCreHours;
}

void Course::setTitle(string newTitle){
  title = newTitle;
}

string Course::getId(){
  return id;
}

string Course::getDepartment(){
  return department;
}

string Course::getNumber(){
  return number;
}

int Course::getCreHours(){
  return creHours;
}

string Course::getTitle(){
  return title;
}

void Course::print(){
  cout << left << setw(5) << id << " " << left << setw(4) << department << " " << left << setw(4) << number <<" " << right << setw(3) << creHours << " " << left << setw(20) << title << endl;
}
