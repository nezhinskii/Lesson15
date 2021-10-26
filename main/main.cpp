#include"DateTimeFuncs.h"
#include<cassert>
int main() {
	tm d1{}, d2{};
	d1.tm_mon = 3;
	d1.tm_mday = 15;
	d2.tm_mon = 3;
	d2.tm_mday = 18;
	assert(LaterInYear(d1, d2).tm_mon == d2.tm_mon && LaterInYear(d1, d2).tm_mday == d2.tm_mday);
	assert(IsLeapYear(2016));
	assert(!IsLeapYear(2015));
	assert(DaysInYear(2016) == 366);
	assert(DaysInYear(2015) == 365);
	assert(DaysInYearRange(2015, 2016) == 731);
	assert(SecondsInHours(2) == 7200);
}