using namespace std;

class Person
{
protected:
	string firstName;
	string lastName;

	string gender;

	int age;

	float balance;

public:
	Person(string nm , string lnm , int age , string gendr);
	Person();


	float getBalance();
	void works();
	void getsPaid();
	void status();
	
};