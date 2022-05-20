//IT21387258
//Bandara H.M.C.S

//Cash

#include<iostream>
#include <iomanip>
#include <string>
#define SIZE 2
#include "Payment.h"
#include "Cash.h"

Cash::Cash(string p_id, string p_date, float p_amount, float c_tender):Payment(
p_id,p_date, p_amount)
{
CashTendered= c_tender;
}
void Cash::setCashTendered(float c_tender){
CashTendered =c_tender;
}
float Cash::getCashTendered(){
return CashTendered;
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
