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
Guest(string fname, string lname, string cNIC, string cDOB, int age, string
C_address, int contact, string email);
  
  
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
int getAge();
string getAddress();
int getContactNumber();
string getEmail();
void viewInsuranceDetails();
void RegsiterToSystem();
void DisplayGuestDetails();
};
