//IT21387562
//EKANAYAKE E.M.A.M

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
