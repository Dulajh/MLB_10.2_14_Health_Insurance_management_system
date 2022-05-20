//IT21387562
//EKANAYAKE E.M.A.M

//Payment Class

class Payment {
protected:
  string ID;
  string Date;
  float Amount;
  
  //aggregation relationship with monthly_premium class
  monthly_premium *premium[1]; //"1" for 1 multiplicity
  
public:
	
  //default constructor
  Payment(); 
  
  //Parameterized constructor
  Payment(string p_id, string p_date, float p_amount);
  
  //Setters
  void SetPaymentID(string p_id);
  void SetPaymentDate(string p_date);
  void SetPaymentAmount(float p_amount);
  
  //Getters
  string GetPaymentID();
  string GetPaymentDate();
  float DetPaymentAmount();

  void StorePaymentDetails();
  void CalculatePaymentDetails();
  void DisplayPaymentDetails();
  
  void addMonthlyPremium(monthly_premium *mp1);
  
  //destructor
  ~Payment();
};
