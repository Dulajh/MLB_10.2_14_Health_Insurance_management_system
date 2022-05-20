//Report
//IT21386336
//Deemantha HGD

#include<iostream>
#include <iomanip>
#include <string>
#define SIZE 2

using namespace std;
class Report{
private :

string ReportID;
string ReporType;
string ReportName;
string ReportDate;
string insureeName;
string deceaseinformation;

public :
Report();
Report(string r_id,string r_type,string r_name,string r_date,string
i_name,string decase);

void displayReport();
void setReportID(string r_id);
void setreportType(string r_type);
void setreportName(string r_name);
void setreportDate(string r_date);
void setinsureeName(string i_name);
void setDeceaseinformation(string decase);
string getReportDetails();
string getreportType();
string getreportName();
string getreportDate();
string getinsureeName();
string getDeceaseinformation();
~Report();
};
