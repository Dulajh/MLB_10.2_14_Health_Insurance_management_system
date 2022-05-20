#include "Bill.h"
#include "Cash.h"
#include "Cheques.h"
#include "CompanyManger.h"
#include "CreditCard.h"
#include "Doctor.h"
#include "Feedback.h"
#include "Geust.h"
#include "Insuree.h"
#include "Login.h"
#include "Monthly_premium.h"
#include "Payment.h"
#include "policy.h"
#include "Registered_member.h"
#include "report.h"

#include<iostream>
#include <iomanip>
#include <string>
#define SIZE 2

using namespace std;


int main()
{
	Insuree i1;
	i1.DisplayInsureeDetails();
	
	CompanyManager c1;
	c1.DisplayCmanagerDetails();
	
	Payment p1;
	p1.DisplayPaymentDetails();
	
	Feedback f1;
	f1.DisplayFeedbackDetails();
	
	Guest g1;
	g1.DisplayGuestDetails();

	Registered_member r1;
	r1.DisplayMemberDetails();

	Doctor d1;
	d1.DisplayDoctorDetails();
	
	Bill b1;
	b1.displayBillDetails();
	
	cout<<"*****************************"<<endl; 
	
	CreditCard cc1;
	cc1.DisplayCardDetails();
	
	cout<<"*****************************"<<endl; 
	
	monthly_premium *m= new monthly_premium("P001","2020-5-10",10000.00);
 	 m->displayPaymentdetails();
 	 
 	cout<<"*****************************"<<endl; 
  
    policy *p=new policy("PO001","geust policy details");
  	p->Displaypolicydetails();
  
  	cout<<"*****************************"<<endl;
  
  	Report *r= new Report("R001","RT23","insureance","Gayan","2020-01-02","124");
 	r->displayReport();
  	
  	cout<<"*****************************"<<endl;
  	
    Cash cash1 = Cash("1","2022-05-15",550.00,81.00);
    cash1.displayCashDetails();
    
    cout<<"*****************************"<<endl;
    
    Cheques cheq1 = Cheques("1","2022-05-15",550.00,"AO2-B","Malabe");
    cheq1.displayChequesDetails();

};
