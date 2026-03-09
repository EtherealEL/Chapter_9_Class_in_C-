
#include <iostream>
using namespace std;



class WeatherReport
{
private: 
	float temp[7][2];
public: 

	void input_temp()
	{
		for (int day = 0; day < 7; day++)
		{
			cout << "Day " << day + 1 << " Morning Temp: ";
			cin >> temp[day][0];

			cout << "Day " << day + 1 << "Evening Temp: ";
			cin >> temp[day][1];
		}

	}


	void display_temp()
	{
		cout << "\n\nTemps for (morning, evening):\n";

		for (int day = 0; day < 7; day++)
		{
			cout << "Day " << day + 1 << ": " << temp[day][0] << ", " << temp[day][1] << endl;
		}

	}

	void display_hottest_day()
	{
		int hottest_day_index = 0;
		float max_avg = (temp[0][0] + temp[0][1]) / 2.0;

		for (int day = 1; day < 7; day++)
		{
			float day_avg = (temp[day][0] + temp[day][1]) / 2.0;

			if(day_avg > max_avg)
			{
				max_avg = day_avg;
				hottest_day_index = day;
			}
		}
		cout << "Hottest Day: Day " << hottest_day_index + 1 << "(Average = " << max_avg << ")" << endl;
	}



};




int main()

{
	WeatherReport report_1;

	report_1.input_temp();
	report_1.display_temp();
	report_1.display_hottest_day();


	return 0;
}

