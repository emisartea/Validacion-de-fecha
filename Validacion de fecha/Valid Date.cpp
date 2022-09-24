#include "Class.h"
#include <iostream> 
#include <string> 
#include <sstream> 
#include <stdlib.h>   


using namespace std; 


void Date::date(int YEAR, int MOUNTH, int DAY) {
	    Year = YEAR;
	    Mounth= MOUNTH;
		Day = DAY;


}
void Date::setdate(int Year, int Mounth, int Day) {
	this->Year = Year;
	this->Mounth = Mounth;
	this->Day = Day;





 }
int Date::getYear() {
	return Year;
}
int Date::getMounth() {
	return Mounth;
	}
int Date::getDay() {
	return Day;

}
void Date::leap_year(int YEAR) {
	this->Year = YEAR;
	if (Year % 4 != 0 || (Year % 100 == 0 && Year % 400 != 0)){
		cout << "The year is not a Leap Year";

	}
	else {
		cout<<"The year is a leap Year";
	}
}
void Date::theYear(int YEAR) {
	this->Year = YEAR;

	if(Year >= 1990 && Year <= 3000 || Year >= 1 && Year <= 99){
		theMounth(Year);
	 }
}
void Date::theMounth(int YEAR) {
	this->Year = YEAR;
	if (Mounth >= 1 && Mounth <= 12) {
		February(Year);

	}
	else {
		cout << " The Mounth is invalid";
	}
}
void Date::TheDay(int YEAR) {
	this->Year = YEAR;
	if (Day >= 1 && Day <= 31) {
		leap_year(Year);

	}
	else {
		cout << " The day is invalid";
	}

}
void Date::February(int YEAR) {
	this->Year = YEAR;
	if (Mounth == 2) {
		daysofFebruary(Year);

	}
	else {
		TheDay(Year);
	}
}
void Date::daysofFebruary(int YEAR) {
	if (Day >= 1 && Day <= 29) {
		leap_year(Year);

	}
	else {
		cout << "The day is invalid";
	}
	this->Year = YEAR;
  }
void Date::run() {
	string user;
	cout << "insert the Date";
	cin >> user;

	string forYear;
	string forMounth;
	string forDay;
	stringstream input(user);
	getline(input, forYear, '-');
	getline(input, forMounth, '-');
	getline(input, forDay, '-');

	cout << forYear << "-" << forMounth << "-" << forDay << "-";
	Day = stoi(forDay);
	Mounth = stoi(forMounth);
	Year = stoi(forYear);

	theYear(Year);
}





int main() {
	Date emi;
	emi.run();
 }
