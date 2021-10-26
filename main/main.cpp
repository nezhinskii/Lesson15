#include"DateTimeFuncs.h"
#include<cassert>
int main() {
	tm d1{}, d2{};
	d1.tm_mon = 3;
	d1.tm_mday = 15;
	d2.tm_mon = 3;
	d2.tm_mday = 18;
	assert(LaterInYear(d1, d2).tm_mon == d2.tm_mon && LaterInYear(d1, d2).tm_mday == d2.tm_mday);
}