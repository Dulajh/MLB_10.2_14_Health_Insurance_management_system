//IT21386336
//Deemantha H.G.D

//Policy

class policy{ 
private:
	string poliucyId;
	string policyDescription;
public:
	policy();
    policy(string pol_id,string P_description);
    void setpolicyID(string pol_id);
    void setpolicyDetails(string P_description);
    string getpolicyID();
    string getpolicyDescription();
    void Displaypolicydetails();
       
};
