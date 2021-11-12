//проверка на простоту 

#include <iostream>
using namespace std;

int main()
{
	int n,y,count;
	y = 1;
	count = 0;
	scanf_s("%d", &n);
	while (y<=n/2)
	{
		if (n%y==0)
		{
			count += 1;
		}
		y += 1;
		printf("%d %d\n", y,count);
	}
	if (count==1)
	{
		printf("prostoe");
	}
	else
	{
		printf("ne prostoye");
	}
}
