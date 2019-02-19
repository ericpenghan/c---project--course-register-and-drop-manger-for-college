//
//  Student.cpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#include "Student.hpp"
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

Student::Student(){
  id = "";
  TotalCreHours = 0;
  lastName = "";
  firstName = "";
}

void Student::setId(string newId){
  id = newId;
}

void Student::setTotalCreHours(int newCreHours){
  TotalCreHours = newCreHours;
}

void Student::setLastName(string newLastNam){
  lastName = newLastNam;
}

void Student::setFirstName(string newFirstName){
  firstName = newFirstName;
}

string Student::getId(){
  return id;
}

int Student::getTotalCreHours(){
  return TotalCreHours;
}

string Student::getLastName(){
  return lastName;
}

string Student::getFirstName(){
  return firstName;
}

void Student::print(){
  cout << left << setw(5) << id << " " << right << setw(3) << TotalCreHours << " " << left << setw(15) << lastName << left << setw(15) << firstName << endl;
}
