class Date {

private:
	int Year;
	int Mounth;
	int Day;

public:
	void date(int, int, int);
	void run();

	void setdate(int, int, int);
	int getYear();
	int getMounth();
	int getDay();

	void leap_year(int);
	void theYear(int);
	void theMounth(int);
	void TheDay(int);
	void February(int);
	void daysofFebruary(int);
}; 
