//IT21380914
//JAYWARDENA K.M.S.P.
//Registered member class.

class Registered_member : public Guest //Multi-level inheritance.
{

protected:
Feedback* f_back[SIZE];
Login* log_in[1]; //compostion

public:
Registered_member();
Registered_member(string fname, string lname, string cNIC, string cDOB, int
age, string C_address, int contact, string email);
  
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
