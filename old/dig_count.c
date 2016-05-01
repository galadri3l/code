#include<math.h>
int digit_count(int n)
{
	unsigned int i;
	i = (int) (log10(n)+1);
	return i;
}
