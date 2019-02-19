//
//  schedList.hpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#ifndef schedList_hpp
#define schedList_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Schedule(new).hpp"
#include <iomanip>
using namespace std;

class ScheduleList {
public:
  void print();
  ScheduleList();
  int getNumSchedules();// not sure
  Schedule getSchedule(int index);
  Schedule getSchedule(string newStuId);
  void addSchedule(Schedule newobj);// not sure
  void read();
  void write();
  
private:
  Schedule scheduleObj[MaxNumCourses];
  int numCours;
};

#endif /* schedList_hpp */
