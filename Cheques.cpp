//IT21387258
//Bandara H.M.C.S

//Cheques

#include "Payment.h"

class Cheques: public Payment{
private:

string bankID;
string Branch;

public:

Cheques(string p_id, string p_date, float p_amount, string b_id, string
branch);

void setbankID(string b_id);
string getbankID();
void setbranch(string branch);
string getbranch();
void displayChequesDetails();
}
