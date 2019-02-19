//
//  Schedule(new).cpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#include "Schedule(new).hpp"
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

Schedule::Schedule(){
  stuId = "";
  string coursesId[MaxNumCourses];
  numCourses = 0;
}

void Schedule::setStuId(string newStuId){
  stuId = newStuId;
}

int Schedule::addCourse(string newCourseId){
  if(numCourses < MaxNumCourses){
    coursesId[numCourses] = newCourseId;
    numCourses++;
    return 0;
  }
  else{
    return -1;
  }
}

string Schedule::getStuId(){
  return stuId;
}

int Schedule::getNumCourses(){
  return numCourses;
}

string Schedule::getCourseId(int index){
  if(index >= 0 && index < numCourses){
    return coursesId[index];
  }
  else{
    return "";
  }
}


int Schedule::dropCourse(string CourseToDrop){
  int found = -1;
  for(int i = 0; i < numCourses; i++){
    if(coursesId[i] == CourseToDrop){
      found = i;
    }
  }
    if(found == -1){
    return -1;
  }
    else {
      numCourses--;
      for(int i = found; i < numCourses; i++){
        coursesId[i] = coursesId[i+1];
        }
      return 0;
  }
}

void Schedule::print(){
  cout << left << setw(5) << stuId << right << setw(2) << numCourses << coursesId << endl;//probably right
}








