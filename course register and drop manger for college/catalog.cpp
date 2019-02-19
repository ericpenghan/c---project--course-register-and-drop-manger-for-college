//
//  catalog.cpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#include "catalog.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

Catalog::Catalog(){
  numCourses = 0;//confuse on wording
}

int Catalog::getNumCourses(){
  return numCourses;
}

Course Catalog::getCourse(int index){
    Course Empty;
  if(index > MaxNumCourses || index < 0){
    return Empty;
  }
  else{
  return courseObj[index];
  }
}


int Catalog::search(string newCourseId){
  int found = -1;
  for(int i = 0; i < numCourses; i++){
    if(courseObj[i].getId()== newCourseId){
      found = i;
      return found;
    }
    
  }
  return -1;
}

void Catalog::read(){
  string temCourseid, temDepartment, temNumber, temTitle;
  int temCreHours;
  
  ifstream f;
  f.open("catalog.txt");
  int i = 0;
  f >> temCourseid;
  while(temCourseid != "XXXXX" && i < MaxNumCourses){
    f >> temDepartment >> temNumber >> temCreHours;//maybe need to use for loop
    f.ignore(); // finished reading integer, getline() on string is next
    getline(f, temTitle);
    courseObj[i].setId(temCourseid);
    courseObj[i].setDepartment(temDepartment);
    courseObj[i].setNumber(temNumber);
    courseObj[i].setCreHours(temCreHours);
    courseObj[i].setTitle(temTitle);
    i++;
    f >> temCourseid;
  }
  numCourses = i;
   f.close();
  }

void Catalog::print(){
  cout << "===========================COURSE CATALOG=========================\n";
  cout << "ID    DEPT NUMB HRS TITLE\n";
  cout << "----- ---- ---- --- --------------------------------------------\n";
  for(int i = 0; i < numCourses; i++){
    courseObj[i].print();
  }
  cout << "========================= # courses listed: " << numCourses << "==================\n";
  system("pause");
}


