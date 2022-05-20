//IT21387258
//Bandara H.M.C.S

//Cheques

#include<iostream>
#include <iomanip>
#include <string>
#define SIZE 2

#include "Payment.h"
#include "Cheques.h"

Cheques::Cheques(string p_id, string p_date, float p_amount, string b_id, string
branch)
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
