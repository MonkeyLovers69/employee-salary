#include <iostream>
#include <string>
using namespace std;
class employee
{
public:
	void employeee(){
		cout << "login: ";
		cin >> login;
		if (login == "123" or login == "228" or login == "1488")
		{
			cout << "enter how much you worked this month!(in hours): ";
			cin >> hours_of_work;
			cout << "how much you are promised to be paid for?(per hour!): ";
			cin >> payment_per_hour;
			cout <<"you are going to be paid around " << salary<< " this month! good job! ";
		}
	}

private:
	string ID;
	string salary = to_string(payment);
	int hours_of_work;
	int payment_per_hour;
	int payment = hours_of_work * payment_per_hour;
	string login;

};

int main()
{
	employee emp{};
	cout << "hello! do you want to know your salary? press Y if yes,n if No: " << endl;
	string choice;
	if (choice == "Y" or choice == "y")
	{
		emp.employeee();
	}
	else
	{
		exit(true);
	}
}
