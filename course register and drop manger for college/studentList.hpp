//
//  studentList.hpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#ifndef studentList_hpp
#define studentList_hpp

#include <stdio.h>
#include "Student.hpp"
#include "Schedule(new).hpp"
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

class StudentList {
public:
  void print();//not sure
  StudentList();
  Student search(string newStuId);
  Student search(int index);
  void read();
  
private:
  Student studentObj[MaxNumCourses];
  int numberStu;
};


#endif /* studentList_hpp */
