//IT21387562
//EKANAYAKE E.M.A.M

//Feedback Class

class Feedback{
	private:
		string FeedbackID;
		string Description;
		int Rate;
		string fDate;
	public:
		//default constructor
		Feedback();
		
		//parameterized constructor
		Feedback(string f_id, string description, int rate, string f_date);
		
		//setters
		void SetFeedbackID(string f_id);
		void SetDescription(string description);
		void SetRate(int rate);
		void SetDate(string f_date);
		
		//getters
		string GetFeedbackID();
		string GetDescription();
		int GetRate();
		string GetDate();
		
		void StoreFeedback();
		void ViewFeedback();
		void DeleteFeedback();
		void DisplayFeedbackDetails();
		
		//Destructor
		~Feedback();
};
