//IT21208294
//Mudalige T.N
//Bill Class
class Bill
{
	private:
		string BillId;
		string BillType;
		float BillAmount;
		CompanyManager* mgr;
	public:
		Bill();
		Bill(string b_id, string b_type, float b_amount);
		void setBillId(string b_id);
		void setBillType(string b_type);
		void setBillAmount(float b_amount);
		string getBillId();
		string getBillType();
		string getBillAmount();
		float calculateTotalBill();
		void displayBillDetails();
		~Bill();
};
