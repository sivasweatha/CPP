#include <iostream.h>
#include <conio.h>

class competition
{
	int learner_id;
	char* learner_name;
	char* category;
	char* competition_name;
	int position;
	int points;
	void calculate(int position, int points)
	{
		if (position == 1)
		{
			points = 10;
		}
		if (position == 2)
		{
			points = 7;
		}
		if (position == 3)
		{
			 points = 5;
		}
		if (position > 3)
		{
			points = 0;
		}
	}
public:
	competition()
	{
	    learner_id = 0;
	    position = 0;
	    points = 0;
	    competition_name = "Welcome";
	    learner_name = "Welcome";
	    category = "Welcome";
	}
	void Accept()
	{
		cin >> learner_id >> learner_name >> category >> competition_name >> position >> points;
	}
	void Display()
	{
		cout << learner_id << learner_name << category << competition_name << position << points;
	}
}

int main()
{
	competition::competition();
	return 0;
}