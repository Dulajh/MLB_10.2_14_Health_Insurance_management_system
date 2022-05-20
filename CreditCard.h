//IT21208294
//Mudalige T.N

//CreditCard Class
 "Payment.h"


class CreditCard:public Payment
{
private:
	string CardNumber;
	string CardType;
	string ExpireDate;

public:
	CreditCard();
	CreditCard(string c_num, string c_type, string exp_date, string p_id, string p_date, float p_amount);
	void setCardNumber(string c_num);
	void setCardType(string c_type);
	void setExpireDate(string exp_date);

	string getCardNumber();
	string getCardType();
	string getExpireDate();

	void TransferFunds();
	void ValidatePayment();
	void DisplayCardDetails();
	~CreditCard();

};
