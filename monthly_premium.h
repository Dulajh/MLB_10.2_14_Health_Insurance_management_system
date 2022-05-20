//IT21386336
//Deemantha H.G.D

//Monthly Premium

class monthly_premium{
private: 
	string premiumId;
    string premiumDate;
    float premiumAmount;
public : 
	monthly_premium();
    monthly_premium(string pre_id,string pre_date,float pre_Amount);
	void setPremiumID(string pre_id);
	void setPremiumDate(string pre_date);
	void SetPremiumAmount(float pre_Amount);
	string getPremiumID();
	string getPremiumDate();
	float getPremiumAmount();
  
	void displayPaymentdetails();

};
