//
//  studentList.cpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#include "studentList.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;


StudentList::StudentList(){
  numberStu = 0;
}

void StudentList::print(){
  cout << "=========================== STUDENT LIST " << "<" << numberStu << ">" <<  "=========================\n";
  cout << "IDNUM HRS LAST           FIRST\n";
  cout << "----- --- -------------- ------------------------------------------\n";
  for(int i = 0; i < numberStu; i++){
    studentObj[i].print();
  }
  
  system("pause");
  
  
}

Student StudentList::search(string newStuId){
  int found = -1;
  Student Empty;
  for(int i = 0; i < numberStu; i++ ){// stuck on
    if(studentObj[i].getId() == newStuId){
      found = i;
      return studentObj[i];
    }
  }
  return Empty;
}


Student StudentList::search(int index){
  Student Empty;
  if(index < 0 || index >  numberStu){
    return Empty;
  }
  else{
    return studentObj[index];// i think
  }
}

void StudentList::read(){//check
  int numStu, credits;
  string Id, lastName, firstName;
  ifstream f;
  f.open("stuList.txt");
  f >> numStu;
  for(int i = 0; i < numStu; i++){
    f >> Id >> lastName >> firstName >> credits;
    studentObj[i].setId(Id);
    studentObj[i].setLastName(lastName);
    studentObj[i].setFirstName(firstName);
    studentObj[i].setTotalCreHours(credits);
  }
  numberStu = numStu;
  f.close();
}
