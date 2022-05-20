//IT21208294
//Mudalige T.N

//Bill
#include <iostream>
#include <cstring>
using namespace std;
#include "Bill.h";

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
