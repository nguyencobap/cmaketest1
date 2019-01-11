#include <header.h>

int binhphuong(int s){
  r=s*s;
  return r;
}

int cStringToInt(char *str)
{
	int temp = 0;
	int sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str>='0' && *str <='9')
	{
		temp *= 10;
		temp += (int)(*str - '0');
		str++;
	}
	return temp * sign;
}
