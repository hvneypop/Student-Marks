#include "Student.h"
#include <iostream>

void Student::setStudentDetails(int sID, string sName){
  studentID=sID;
  studentName=sName;
}
void Student::setMarksOOC(int ooc){
  marksOOC=ooc;
}
int Student::getMarksOOC(){
  return marksOOC;
}
 void Student::setMarksSPM(int spm){
   marksSPM=spm;
 }

int Student::getMarksSPM(){
  return marksSPM;
}

void Student::setMarksISDM(int isdm){
  marksISDM=isdm;
}
int Student::getMarksISDM(){
  return marksISDM;
}
