#include "sint2float.h"

float sint2float(signed int val)
{
	float result;
	const float recip = 1.0 / (32768.0*65536.0);
	result = val * recip;

	return result;
}
