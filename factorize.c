#include "factors.h"
int factorize(int n)
{
	int i;

	if (n % 2 == 0)
	{
		i = n / 2;
		printf("%d = %d * 2\n",n ,i);
		return 0;
	}
	else
        {
                i = n / 3;
                printf("%d = %d * 2\n",n ,i);
                return 0;
        }
}
