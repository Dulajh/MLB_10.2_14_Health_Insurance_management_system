//IT21208294
//Mudalige T.N

//Login Class

class Login
{
private:
	string Username;
	string Password;

public:
	Login();
	Login(string username, string p_word);

	void setUserName(string username);
	void setPassword(string p_word);
	string getUserName();
	string getPassword();

	~Login();
};
