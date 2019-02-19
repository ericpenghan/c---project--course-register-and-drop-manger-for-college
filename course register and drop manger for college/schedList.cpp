//
//  schedList.cpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#include "schedList.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void ScheduleList::print(){
  cout << "=========================== ALL SCHEDULES " << "<" << numCours << ">" <<  "=========================\n";
  cout << "STUID #C COURSE           IDS\n";
  cout << "----- -- -------------- ------------------------------------------\n";
  for(int i = 0; i < numCours; i++){
    cout << scheduleObj[i].getStuId() << " " << scheduleObj[i].getNumCourses() << " ";
    for(int j = 0; j < scheduleObj[i].getNumCourses(); j++){
      cout << scheduleObj[i].getCourseId(j) << " ";
      
    }
    cout << endl;
  }
  system("pause");
}

ScheduleList::ScheduleList(){
  numCours = 0;
}

int ScheduleList::getNumSchedules(){
  return numCours;
}

Schedule ScheduleList::getSchedule(int index){
  Schedule empty;
  if(index < 0 || index > numCours ){
    return empty;
  }
  else{
    return scheduleObj[index];
  }
}

Schedule ScheduleList::getSchedule(string newStuId){
  int found = -1;
  Schedule Empty;
  for(int i = 0; i < numCours; i++ ){// stuck on
    if(scheduleObj[i].getStuId() == newStuId){
      found = i;
      return scheduleObj[i];
    }
  }
  return Empty;
}

void ScheduleList::addSchedule(Schedule newobj){// think it donesn't return anything
  int found = -1;
  for(int i = 0; i < numCours; i++ ){
    if(scheduleObj[i].getStuId()== newobj.getStuId()){
      scheduleObj[i] = newobj;
      found = i;
    }
  }
      if(found == -1 && numCours < MaxNumCourses){
        scheduleObj[numCours]= newobj;
        numCours++;
      }
      else{
        cout << "List full\n";
      }
    }
    

  
  void ScheduleList::read(){
    int temNumCour, temNumCourTaken;
    string temStuId, temCourID;
    ifstream f;
    f.open("schedList.txt");
    f >> temNumCour;// not green
    for(int i = 0; i < temNumCour; i++){
      f >> temStuId >> temNumCourTaken;
      scheduleObj[i].setStuId(temStuId);
      for(int j = 0; j < temNumCourTaken;j++){
        f >> temCourID;
        scheduleObj[i].addCourse(temCourID);
      }
    }
    f.close();
    numCours = temNumCour;
  }
  
  
void ScheduleList::write(){
  ofstream f;
  f.open("SchedList_1.txt");
  f << numCours << endl;
  for(int i = 0; i < numCours; i++){
    f << scheduleObj[i].getStuId() << " " << scheduleObj[i].getNumCourses() << " ";
    for(int j = 0; j < scheduleObj[i].getNumCourses(); j++){
    f << scheduleObj[i].getCourseId(j) << " ";
      
    }
    f << endl;
      }
  f.close();
}
  
