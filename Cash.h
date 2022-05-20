//IT21387258
//Bandara H.M.C.S

//Cash

#include "Payment.h"

class Cash: public Payment{

private:

float CashTendered ;

public:

Cash(string p_id, string p_date, float p_amount, float c_tender);

void setCashTendered(float c_tender);
float getCashTendered();
void displayCashDetails();
void tranferfunds();

};
