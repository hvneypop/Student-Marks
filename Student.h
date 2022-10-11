#include <string>

using namespace std;

class Student
{
  private :
    int studentID;
    string studentName;
    int marksOOC;
    int marksSPM;
    int marksISDM;

  public :
    void setStudentDetails(int sID,string sName);
    void setMarksOOC(int ooc);
    int getMarksOOC();
    void setMarksSPM(int spm);
    int getMarksSPM();
    void setMarksISDM(int isdm);
    int getMarksISDM();
};