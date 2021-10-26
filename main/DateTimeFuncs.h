#ifndef DTF_H
#define DTF_H
#include <ctime>
bool IsLeapYear(int year);
tm& LaterInYear(const tm& d1, const tm& d2);
int DaysInYear(int year);
int DaysInYearRange(int year1, int year2);
int SecondsInHours(int hours);
#endif
