//
//  Schedule(new).hpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#ifndef Schedule_new__hpp
#define Schedule_new__hpp

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MaxNumCourses = 50;

class Schedule {
public:
  void print();
  Schedule();
  void setStuId(string newStuId);
  string getStuId();
  int getNumCourses();
  string getCourseId(int index);
  int addCourse(string newCourseId);
  int dropCourse(string CourseToDrop);
  
private:
  string stuId;
  string coursesId[MaxNumCourses];
  int numCourses;
};

#endif /* Schedule_new__hpp */
