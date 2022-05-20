//IT21387562
//EKANAYAKE E.M.A.M

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
