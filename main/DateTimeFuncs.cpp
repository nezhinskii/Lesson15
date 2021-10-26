#include<ctime>

bool IsLeapYear(int year) {
	return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

tm& LaterInYear(tm& d1, tm& d2) {
	if (d1.tm_mon < d2.tm_mon) return d2;
	if (d1.tm_mon > d2.tm_mon) return d1;
	return (d1.tm_mday < d2.tm_mday) ? d2 : d1;
}

int DaysInYear(int year) {
	return IsLeapYear(year) ? 366 : 365;
}

int DaysInYearRange(int year1, int year2) {
	int ans = 0;
	for (int i = year1; i <= year2; ++i) {
		ans += DaysInYear(i);
	}
	return ans;
}