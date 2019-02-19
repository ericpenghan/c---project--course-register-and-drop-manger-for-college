#pragma once
//----------------------------------------------------------------------
//                         userint class
//----------------------------------------------------------------------
// This class implements the user interface for the Student Course
// Registration project.
//----------------------------------------------------------------------
// INSTRUCTIONS: you may have to change the names of .h files, classes,
// and/or methods of classes to match those you have written;
// OR
// change the names in your code to match those used here
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;
#include "studentList.hpp"
#include "schedList.hpp"
#include "catalog.hpp"
#include "menu.hpp"
#include "Course.hpp"

const int CRS_NOT_FOUND = -1;
class userint {
public:
  userint();
  void go();
private:
  ScheduleList   scList;
  Catalog     cat;
  StudentList stuList;
  Menu        mainMenu;
  Menu        regMenu;
  void registerStudent();
  void printSchedule(Student stu, Schedule sched);
  void addCourse(Student stu, Schedule & sched);
  void dropCourse(Student stu, Schedule & sched);
};
