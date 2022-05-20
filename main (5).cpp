#include<iostream>
#include <iomanip>
#include <string>
#define SIZE 2

using namespace std;

class CompanyManager;
class Bill;
class Doctor;
class Report;
class Insuree;

//IT21380914
//JAYWARDENA K.M.S.P. 

//Guest class

class Guest
{
protected:

	string FirstName;
	string LastName;
	string NIC;
	string DOB;
	int Age;
	string Address;
	int ContactNum;
	string Email;
	

public:

	Guest();
	Guest(string fname, string lname, string cNIC, string cDOB, int age, string C_address, int contact, string email);

	//setters
	void setFirstName(string fname);
	void setLastName(string lname);
	void setNIC(string cNIC);
	void setDOB(string cDOB);
	void setAge(int age);
	void setAddress(string C_address);
	void setContactNumber(int contact);
	void setEmail(string email);

	//getters
	string getFirstName();
	string getLastName();
	string getNIC();
	string getDOB();
	int  getAge();
	string getAddress();
	int  getContactNumber();
	string getEmail();

	void viewInsuranceDetails();
	void RegsiterToSystem();
	void DisplayGuestDetails();

};

//IT21387562
//Ekanayake E.M.A.M

//Feedback Class

class Feedback{
	private:
		string FeedbackID;
		string Description;
		int Rate;
		string fDate;
	public:
		//default constructor
		Feedback();
		
		//parameterized constructor
		Feedback(string f_id, string description, int rate, string f_date);
		
		//setters
		void SetFeedbackID(string f_id);
		void SetDescription(string description);
		void SetRate(int rate);
		void SetDate(string f_date);
		
		//getters
		string GetFeedbackID();
		string GetDescription();
		int GetRate();
		string GetDate();
		
		void StoreFeedback();
		void ViewFeedback();
		void DeleteFeedback();
		void DisplayFeedbackDetails();
		
		//Destructor
		~Feedback();
};

//IT21208294
//Mudalige T.N

//Login Class

class Login
{
private:
	string Username;
	string Password;

public:
	Login();
	Login(string username, string p_word);

	void setUserName(string username);
	void setPassword(string p_word);
	string getUserName();
	string getPassword();

	~Login();
};


//IT21380914
//JAYWARDENA K.M.S.P. 

//Registered member class.

class Registered_member : public Guest    //Multi-level inheritance.
{
protected:
	Feedback* f_back[SIZE];
	Login* log_in[1]; //compostion

public:
	Registered_member();
	Registered_member(string fname, string lname, string cNIC, string cDOB, int age, string C_address, int contact, string email);
	//Compostion 
	void addLogin();

	// composition
	void addFeedback(Feedback *f1, Feedback *f2);

	void login();
	void updateAccounr();
	void giveFeedback();
	void RegsiterToPolicy();
	void DisplayMemberDetails();

};

//IT21386336
//Deemantha H.G.D

//Policy

class policy{
private:
	string poliucyId;
	string policyDescription;
public:
	policy();
    policy(string pol_id,string P_description);
    void setpolicyID(string pol_id);
    void setpolicyDetails(string P_description);
    string getpolicyID();
    string getpolicyDescription();
    void Displaypolicydetails();
       
};

//IT21387562
//Ekanayake E.M.A.M

//Company manager class

class CompanyManager :  public Registered_member{
private:
  string CmanagerID;
  
  //bi-dirrectional association with Bill class
  Bill *bill[2];//"2" for 0..* multiplicity
  
public:
	
  //default constructor
  CompanyManager(); 
  
  //Parameterized constructor
  CompanyManager(string fname, string lname,string cNIC,string cDOB,int age,string address, int contact, string email,string c_id);
  
  //Setters
  void SetCmanagerID(string c_id);
  
  //Getters
  string GetCmanagerID();

  void ValidateBills();
  void ApprovePayments();
  void DisplayCmanagerDetails();
  
  void addBill();
  
  ~CompanyManager();
};

//IT21386336
//Deemantha H.G.D

//Report

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
    Report(string r_id,string r_type,string r_name,string r_date,string i_name,string decase);
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

//IT21208294
//Mudalige T.N

//Bill Class

class Bill
{
private:
	string BillId;
	string BillType;
	float BillAmount;
    CompanyManager* mgr;

public:
	Bill();
	Bill(string b_id, string b_type, float b_amount);
	void setBillId(string b_id);
	void setBillType(string b_type);
	void setBillAmount(float b_amount);

	string getBillId();
	string getBillType();
	string getBillAmount();

	float calculateTotalBill();
	void displayBillDetails();

	~Bill();
};

//IT21380914
//JAYWARDENA K.M.S.P. 

//Doctor class.

class Doctor : public Registered_member   //Multi-level inheritance.
{
protected:
	string id;
	Report* rept[SIZE];

public:
	Doctor();
	Doctor(string fname, string lname, string cNIC, string cDOB, int age, string C_address, int contact, string email, string d_id);

	void setDoctorID(const char d_id[]);
	string getDoctorID();
	void AccessReports();
	void ValidateReports();
	void UploadValidatedReports();
	void DisplayDoctorDetails();
};

//IT21386336
//Deemantha H.G.D

//Monthly Premium

class monthly_premium{
private: 
	string premiumId;
    string premiumDate;
    float premiumAmount;
public : 
	monthly_premium();
    monthly_premium(string pre_id,string pre_date,float pre_Amount);
	void setPremiumID(string pre_id);
	void setPremiumDate(string pre_date);
	void SetPremiumAmount(float pre_Amount);
	string getPremiumID();
	string getPremiumDate();
	float getPremiumAmount();
	void displayPaymentdetails();

};

//IT21387562
//Ekanayake E.M.A.M.

//Payment Class

class Payment {
protected:
  string ID;
  string Date;
  float Amount;
  
  //aggregation relationship with MonthlyPremium class
  monthly_premium *premium[1]; //"1" for 1 multiplicity
  
public:
	
  //default constructor
  Payment(); 
  
  //Parameterized constructor
  Payment(string p_id, string p_date, float p_amount);
  
  //Setters
  void SetPaymentID(string p_id);
  void SetPaymentDate(string p_date);
  void SetPaymentAmount(float p_amount);
  
  //Getters
  string GetPaymentID();
  string GetPaymentDate();
  float DetPaymentAmount();

  void StorePaymentDetails();
  void CalculatePaymentDetails();
  void DisplayPaymentDetails();
  
  void addMonthlyPremium(monthly_premium *mp1);
  
  //destructor
  ~Payment();
};

//IT21208294
//Mudalige T.N

//CreditCard Class

class CreditCard:public Payment
{
private:
	string CardNumber;
	string CardType;
	string ExpireDate;

public:
	CreditCard();
	CreditCard(string c_num, string c_type, string exp_date, string p_id, string p_date, float p_amount);
	void setCardNumber(string c_num);
	void setCardType(string c_type);
	void setExpireDate(string exp_date);

	string getCardNumber();
	string getCardType();
	string getExpireDate();

	void TransferFunds();
	void ValidatePayment();
	void DisplayCardDetails();
	~CreditCard();

};

//IT21387258
//Bandara H.M.C.S

//cash

class Cash: public Payment{
private:
   float CashTendered ;             
    
public:
    Cash(string p_id, string p_date, float p_amount, float  c_tender);
    void setCashTendered(float c_tender);
    float  getCashTendered();
    void displayCashDetails();
    void tranferfunds();
};

//IT21387258
//Bandara H.M.C.S

//cheques

class Cheques: public Payment{
private:
    string bankID;             
    string Branch;
public:
    Cheques(string p_id, string p_date, float p_amount, string b_id, string branch);
    void setbankID(string b_id);
    string getbankID();
    void setbranch(string branch);
    string getbranch();
    void displayChequesDetails();
};


//IT21387562
//Ekanayake E.M.A.M

//Insuree Class

class Insuree : public Registered_member{
private:
  string InsureeID;
  
  //bi-dirrectional accosiation with Bill class
  Bill *bill[2];//"2" for 1..* multiplicity 
  
  //Composition with Payment class
  Payment *pay[2];//"2" for 1..* multiplicity 

public:
	
  //default constructor
  Insuree(); 
  
  //Parameterized constructor
  Insuree(string fname, string lname,string cNIC,string cDOB,int age,string address, int contact, string email,string I_id);
  
  //Setters
  void SetInsureeID(string I_id);
  
  //Getters
  string GetInsureeID();

  void PayMonthlyPremium();
  void SubmitReports();
  void FollowRules();
  void UploadInformations();
  void DisplayInsureeDetails();
  
  //Bi-direction
  void addBill();
  
  //composition
  void addPayment();
  
  //Aggregation
  void addMonthlyPremium(monthly_premium *mp1);
  
  //Destructor
  ~Insuree();
};

//Implementing classes

//IT21380914
//JAYAWARDENA K.M.S.P

//Guest 

Guest::Guest()
{
	FirstName = "";
	LastName = "";
	NIC = "";
	DOB = "";
	Age = 0;
	Address = "";
	ContactNum = 0;
	Email = "";
}
Guest::Guest(string fname, string lname, string cNIC, string cDOB, int age, string C_address, int contact, string email)
{
	FirstName = fname;
	LastName = lname;
	NIC = cNIC;
	DOB = cDOB;
	Age = age;
	Address = C_address;
	ContactNum = contact;
	Email = email;

}
void Guest::DisplayGuestDetails()
{
	cout << "Guest first name:" << FirstName << endl;
	cout << "Guest Last name:" << LastName << endl;
	cout << "Guest NIC:" << NIC << endl;
	cout << "Guest DOB:" << DOB << endl;
	cout << "Guest age:" << Age << endl;
	cout << "Guest Address:" << Address << endl;
	cout << "Guest contact number:" << ContactNum << endl;
	cout << "************************************" << endl;
}

//IT21380914
//JAYAWARDENA K.M.S.P

//Registered member

Registered_member::Registered_member()
{
	FirstName = "";
	LastName = "";
	NIC = "";
	DOB = "";
	Age = 0;
	Address = "";
	ContactNum = 0;
	Email = "";
	
}
Registered_member::Registered_member(string fname, string lname, string cNIC, string cDOB, int age, string C_address, int contact, string email)
{
	FirstName = fname;
	LastName = lname;
	NIC = cNIC;
	DOB = cDOB;
	Age = age;
	Address = C_address;
	ContactNum = contact;
	Email = email;
}
void Registered_member::addLogin()
{
	
}
void Registered_member::addFeedback(Feedback *f1, Feedback *f2)
{
	f_back[0] = f1;
	f_back[1] = f2;
}
void Registered_member::DisplayMemberDetails()
{
	cout << "Registered member first name:" << FirstName << endl;
	cout << "Registered member Last name:" << LastName << endl;
	cout << "Registered member NIC:" << NIC << endl;
	cout << "Registered member DOB:" << DOB << endl;
	cout << "Registered member age:" << Age << endl;
	cout << "Registered member address" << Address << endl;
	cout << "Registered member Contact Number:" << ContactNum << endl;
	cout << "*************************************" << endl;
}

//IT21380914
//JAYAWARDENA K.M.S.P

//Doctor

Doctor::Doctor()
{
	FirstName = "";
	LastName = "";
	NIC = "";
	DOB = "";
	Age = 0;
	Address = "";
	ContactNum = 0;
	Email = "";
	id = "";
}
Doctor::Doctor(string fname, string lname, string cNIC, string cDOB, int age, string C_address, int contact, string email, string d_id)
{
	FirstName = fname;
	LastName = lname;
	NIC = cNIC;
	DOB = cDOB;
	Age = age;
	Address = C_address;
	ContactNum = contact;
	Email = email;
	id = d_id;
}
void Doctor::DisplayDoctorDetails()
{
	cout << "Doctor first name:" << FirstName << endl;
	cout << "Doctor Last name:" << LastName << endl;
	cout << "Docotr NIC:" << NIC << endl;
	cout << "Doctor DOB:" << DOB << endl;
	cout << "Doctor age" << Age << endl;
	cout << "Doctor address:" << Address << endl;
	cout << "Doctor contact Number:" << ContactNum << endl;
	cout << "Docotr ID:" << id << endl;
	cout << "************************************" << endl;
}

//IT21387562
//Ekanayake E.M.A.M

//Feedback

Feedback::Feedback()
{
	FeedbackID="F0000";
	Description="This is Description";
	Rate=0;
	fDate="0000-00-00";	
}
Feedback::Feedback(string f_id, string description, int rate, string f_date)
{
	FeedbackID=f_id;
	Description=description;
	Rate=rate;
	fDate=f_date;	
}
void Feedback::SetFeedbackID(string f_id)
{
	FeedbackID=f_id;
}
void Feedback::SetDescription(string description)
{
	Description=description;
}
void Feedback::SetRate(int rate)
{
	Rate=rate;
}
void Feedback::SetDate(string f_date)
{
	fDate=f_date;
}
string Feedback::GetFeedbackID()
{
	return FeedbackID;
}
string Feedback::GetDescription()
{
	return Description;
}
int Feedback::GetRate()
{
	return Rate;
}
string Feedback::GetDate()
{
	return fDate;
}
void Feedback::StoreFeedback()
{
	
}
void Feedback::ViewFeedback()
{
	
}
void Feedback::DeleteFeedback()
{
	
}
void Feedback::DisplayFeedbackDetails()
{
	cout<<"Feedback ID           : " <<FeedbackID << endl;
	cout<<"Feedback Description  : " <<Description <<endl;
	cout<<"Feedback Rate         : " <<Rate<<endl;
	cout<<"Feedback Date         : " <<fDate<<endl;
	cout<<"***********************************"<<endl<<endl;		
}
Feedback::~Feedback()
{
	cout<<"Deleting Feedback"<<endl<<endl;	
}

//IT21387562
//Ekanayake E.M.A.M

//Payment

Payment::Payment()
{
	ID="P0000";
	Date="0000-00-00";
	Amount=0.00;	
}
Payment::Payment(string p_id, string p_date, float p_amount)
{
	ID=p_id;
	Date=p_date;
	Amount=p_amount;	
}
void Payment::SetPaymentID(string p_id)
{
	ID=p_id;
}
void Payment::SetPaymentDate(string p_date)
{
	Date=p_date;
}
void Payment::SetPaymentAmount(float p_amount)
{
	Amount=p_amount;
}
string Payment::GetPaymentID()
{
	return ID;
}
string Payment::GetPaymentDate()
{
	return Date;
}
float Payment::DetPaymentAmount()
{
	return Amount;
}
void Payment::StorePaymentDetails()
{
	
}
void Payment::CalculatePaymentDetails()
{
	
}
void Payment::DisplayPaymentDetails()
{
	cout<<"Payment ID     : " <<ID << endl;
	cout<<"Payment Date   : " <<Date <<endl;
	cout<<"Payment Amount : " <<Amount<<endl;
	cout<<"***********************************"<<endl<<endl;		
}
void Payment::addMonthlyPremium(monthly_premium *mp1)
{
  premium[0]=mp1;
}
Payment::~Payment()
{
	cout<<"Deleting Payment"<<endl<<endl;	
}

//IT21387562
//Ekanayake E.M.A.M

//Insuree

Insuree::Insuree()
{ 
	FirstName="first name";
	LastName="last name";
	NIC="000000000000";
	DOB="0000-00-00";
	Age=00;
	Address="town";
	ContactNum=000000000;
	Email="abc@gmail.com";
	InsureeID="I0000";
}
Insuree::Insuree(string fname, string lname,string cNIC,string cDOB,int age,string address, int contact, string email,string I_id):Registered_member(fname, lname, cNIC, cDOB, age, address, contact, email)
{
	FirstName=fname;
	LastName=lname;
	NIC=cNIC;
	DOB=cDOB;
	Age=age;
	Address=address;
	ContactNum=contact;
	Email=email;
	InsureeID=I_id;	
}
void Insuree::SetInsureeID(string InsureeID)
{
	
}
string Insuree::GetInsureeID()
{
	return InsureeID;
}
void Insuree::PayMonthlyPremium()
{
	
}
void Insuree::SubmitReports()
{
	
}
void Insuree::FollowRules()
{
	
}
void Insuree::UploadInformations()
{
	
}
void Insuree::DisplayInsureeDetails() 
{
	cout<<"Insuree First Name : " <<FirstName << endl;
	cout<<"Insuree Last Name  : " <<LastName<<endl;
	cout<<"Insuree NIC        : " <<NIC<<endl;
	cout<<"Insuree DOB        : " <<DOB<<endl;
	cout<<"Insuree Age        : " <<Age<<endl;
	cout<<"Insuree Address    : " <<Address<<endl;
	cout<<"Insuree Contact no : " <<ContactNum<<endl;
	cout<<"***********************************"<<endl<<endl;
}
void Insuree::addBill()
{
	
}
void Insuree::addPayment()
{
	pay[0]= new Payment();
    pay[1]= new Payment();
}
Insuree::~Insuree()
{
cout<<"Deleting Insuree "<<endl<<endl;	
}

//IT21387562
//Ekanayake E.M.A.M

//Company Manager

CompanyManager::CompanyManager()
{ 
	FirstName="first name";
	LastName="last name";
	NIC="000000000000";
	DOB="0000-00-00";
	Age=00;
	Address="town";
	ContactNum=000000000;
	Email="abc@gmail.com";
	CmanagerID="C0000";	
}
CompanyManager::CompanyManager(string fname, string lname,string cNIC,string cDOB,int age,string address, int contact, string email,string c_id)
{
	FirstName=fname;
	LastName=lname;
	NIC=cNIC;
	DOB=cDOB;
	Age=age;
	Address=address;
	ContactNum=contact;
	Email=email;
	CmanagerID=c_id;			
}
void CompanyManager::SetCmanagerID(string c_id)
{
	CmanagerID=c_id;
}
string CompanyManager::GetCmanagerID()
{
	
}
void CompanyManager::ValidateBills()
{
	
}
void CompanyManager::ApprovePayments()
{
	
}
void CompanyManager::DisplayCmanagerDetails()
{
	cout<<"Company Manager First Name : " <<FirstName << endl;
	cout<<"Company Manager Last Name  : " <<LastName<<endl;
	cout<<"Company Manager NIC        : " <<NIC<<endl;
	cout<<"Company Manager DOB        : " <<DOB<<endl;
	cout<<"Company Manager Age        : " <<Age<<endl;
	cout<<"Company Manager Address    : " <<Address<<endl;
	cout<<"Company Manager Contact no : " <<ContactNum<<endl;
	cout<<"***********************************"<<endl<<endl;	
}
void CompanyManager::addBill()
{
	
}
CompanyManager::~CompanyManager()
{
	cout<<"Deleting Company Manager "<<endl<<endl;
}

//IT21208294
//Mudalige T.N

//CreditCard

CreditCard::CreditCard()
{
	CardNumber = " ";
	CardType = "No card";
	ExpireDate = "00-00-0000";
}
CreditCard::CreditCard(string c_num, string c_type, string exp_date, string p_id, string p_date, float p_amount)
{
	CardNumber = c_num;
      CardType = c_type;
    ExpireDate = exp_date;
}
void CreditCard::setCardNumber(string c_num)
{
	
}
void CreditCard::setCardType(string c_type)
{
	
}
void CreditCard::setExpireDate(string exp_date)
{
	
}
string CreditCard::getCardNumber()
{
	
}
string CreditCard::getCardType()
{
	
}
string CreditCard::getExpireDate()
{
	
}
void CreditCard::TransferFunds()
{
	
}
void CreditCard::ValidatePayment()
{
	
}
void CreditCard::DisplayCardDetails()
{
	cout << "Card number:" << CardNumber <<endl;
	cout << "Card type:" << CardType <<endl;
	cout << "Expire date:" << CardType <<endl;
}
CreditCard::~CreditCard()
{
	
}

//IT21208294
//Mudalige T.N

//Login

Login::Login()
{
    Username = " ";
    Password = " ";
}
Login::Login(string username, string p_word)
{
    Username = username;
    Password = p_word;
}
void Login::setUserName(string username)
{
	
}
void Login::setPassword(string p_word)
{
	
}
string Login::getUserName()
{
	
}
string Login::getPassword()
{
	
}
Login::~Login()
{
	
}

//IT21208294
//Mudalige T.N

//Bill

Bill::Bill()
{
    BillId = " ";
    BillType = " ";
    BillAmount = 0;
}

Bill::Bill(string b_id, string b_type, float b_amount)
{
    BillId = b_id;
    BillType = b_type;
    BillAmount = b_amount;
}
void Bill::setBillId(string b_id)
{
	
}
void Bill::setBillType(string b_type)
{
	
}
void Bill::setBillAmount(float b_amount)
{
	
}
string Bill::getBillId()
{
    return string();
}
string Bill::getBillType()
{
    return string();
}
string Bill::getBillAmount()
{
    return string();
}
float Bill::calculateTotalBill()
{
	
}
void Bill::displayBillDetails()
{
    cout << "BillId:" << BillId <<endl;
    cout << "BillType:" << BillType <<endl;
    cout << "BillAmount:" << BillAmount <<endl;
}
Bill::~Bill()
{
	
}

//IT21386336
//Deemantha H.G.D

//Monthly Premium

monthly_premium::monthly_premium()
{//default constructor
  premiumId ="";
  premiumDate="";
  premiumAmount=0;
}
monthly_premium::monthly_premium(string pre_id,string pre_date,float pre_Amount)
{ //overide constructor
  premiumId =pre_id;
  premiumDate=pre_date;
  premiumAmount=pre_Amount;
}
void monthly_premium::setPremiumID(string pre_id)
{
 premiumId =pre_id;
}
void monthly_premium::setPremiumDate(string pre_date)
{
   premiumDate=pre_date;
}
void monthly_premium::SetPremiumAmount(float pre_Amount)
{
  premiumAmount=pre_Amount;
}
string monthly_premium::getPremiumID()
{
  return premiumId;
}
string monthly_premium::getPremiumDate()
{
  return premiumDate;
}
float monthly_premium::getPremiumAmount()
{
  return premiumAmount;
}
void monthly_premium::displayPaymentdetails()
{
  cout<<"Premium Id = "<< premiumId<<endl<<"Premium Date = "<<premiumDate<< endl<< "Premium Amount = "<<premiumAmount<<endl;
}

//IT21386336
//Deemantha H.G.D

//Policy
policy::policy()
{
  poliucyId="";
  policyDescription="";
}
policy::policy(string pol_id,string P_description)
{
  poliucyId=pol_id;
  policyDescription=P_description;
}
void policy::setpolicyID(string pol_id)
{
  poliucyId=pol_id;
}
void policy::setpolicyDetails(string P_description)
{
  policyDescription=P_description;
}
string policy::getpolicyID()
{
  return poliucyId;
}
string policy::getpolicyDescription()
{
  return policyDescription;
}
void policy::Displaypolicydetails()
{
  cout<<" Policy id = "<<poliucyId<<endl<< "policy Description = "<<policyDescription<<endl;
}

//IT21386336
//Deemantha H.G.D

//Report

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

//IT21387258
//Bandara H.M.C.S

//Cash

Cash::Cash(string p_id, string p_date, float p_amount, float c_tender):Payment( p_id,p_date, p_amount)
    {

            CashTendered= c_tender;
        
}
void Cash::setCashTendered(float c_tender){
         CashTendered =c_tender;
    }

   float Cash::getCashTendered(){
        return  CashTendered;
    }


    void Cash::displayCashDetails(){
        cout<<"Payment ID: "<<ID<<endl;
        cout<<"Payment Date: "<<Date<<endl;
        cout<<"Payment Amount: "<<Amount<<endl;
        cout<<"Cash Tendered: "<<CashTendered<<endl;
        
    }
     void tranferfunds(float Amount){
        cout<<"Transfer Funds: "<<Amount<<endl;
    }

//IT21387258
//Bandara H.M.C.S

//Cheques
Cheques::Cheques(string p_id, string p_date, float p_amount, string b_id, string branch)
        :Payment( p_id,p_date, p_amount)
    {
        bankID =b_id;
        Branch = branch;
    }

    void Cheques::setbankID(string b_id){
        bankID = b_id;
    }

    string Cheques::getbankID(){
        return bankID;
    }

    void Cheques::setbranch(string branch){
    }

    string getbranch(){
    }

    void Cheques::displayChequesDetails(){
        cout<<"Payment ID: "<<ID<<endl;
        cout<<"Payment Date: "<<Date<<endl;
        cout<<"Payment Amount: "<<Amount<<endl;
        cout<<"Bank ID: "<<bankID<<endl;
        cout<<"Branch: "<<Branch<<endl;
    }


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

