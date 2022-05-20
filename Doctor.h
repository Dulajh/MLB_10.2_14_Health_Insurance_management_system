//IT21380914
//JAYWARDENA K.M.S.P.
//Doctor class.
class Doctor : public Registered_member //Multi-level inheritance.
{
protected:

string id;
Report* rept[SIZE];

public:
Doctor();
Doctor(string fname, string lname, string cNIC, string cDOB, int age, string
C_address, int contact, string email, string d_id);
  
void setDoctorID(const char d_id[]);
string getDoctorID();
void AccessReports();
void ValidateReports();
void UploadValidatedReports();
void DisplayDoctorDetails();
};
