bool IsLeapYear(int year) {
	return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}
int SecondsInMinute() {
	return 60;
}