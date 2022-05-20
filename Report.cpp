#include<iostream>
#include <iomanip>
#include <string>
#define SIZE 2

#include "Report.h"

Report::Report()
{  //default constructor
   ReportID ="";
   ReporType="";
   ReportName="";
   ReportDate="";
   insureeName="";
   deceaseinformation="";
}
Report::Report(string r_id,string r_type,string r_name,string r_date,string i_name,string decase)
{  //overloaded constructor
          ReportID=r_id;
          ReporType=r_type;
          ReportName=r_name;
           ReportDate=r_date;
          insureeName=i_name;
          deceaseinformation=decase;
}
void Report::setReportID(string r_id)
{
  ReportID=r_id;
}
void Report::setreportType(string r_type)
{  //method
   ReporType=r_type;
}
void Report::setreportName(string r_name)
{  //method
   ReportName=r_name;
}
void Report::setreportDate(string r_date)
{  //method
  ReportDate=r_date;
}
void Report::setinsureeName(string i_name)
{  //method
  insureeName=i_name;
}
void Report::setDeceaseinformation(string decase)
{  //method
   deceaseinformation=decase;
}
string Report:: getReportDetails()
{
  return ReportID;
}
string Report:: getreportType()
{
  return ReporType;
}
string Report::getreportName()
{
  return ReportName;
}
string Report:: getreportDate()
{
  return ReportDate;
}
string Report::getinsureeName()
{
  return insureeName;
}
string Report:: getDeceaseinformation()
{
  return deceaseinformation;
}
void Report::displayReport()
{  //method
   cout<<"Report id :"<< ReportID<< endl<< "Report type :"<<ReporType<<endl<< "Report Name :"<< ReportName<< endl<< "Insuree Name :"<<insureeName<<endl;
}
Report::~Report()
{
	
}
{
  return ReportDate;
}
string Report::getinsureeName()
{
  return insureeName;
}
string Report:: getDeceaseinformation()
{
  return deceaseinformation;
}
void Report::displayReport()
{  //method
   cout<<"Report id :"<< ReportID<< endl<< "Report type :"<<ReporType<<endl<< "Report Name :"<< ReportName<< endl<< "Insuree Name :"<<insureeName<<endl;
}
Report::~Report()
{
	
}
