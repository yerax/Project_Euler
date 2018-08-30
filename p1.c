#include <stdio.h>
#include <string.h>
#include <time.h>

int main () {
	char buff [24];
	int sum = 0;
	clock_t begin = clock();
	for (int i=0; i < 1000; ++i)
	{
		if (i%3 == 0 || i%5 == 0) sum += i;
	}
	clock_t end = clock();

	double timespend = (double) (end - begin) / CLOCKS_PER_SEC;
	sprintf(buff,"Total Time: %f \n",timespend);
  write(1,buff,strlen(buff));
	sprintf(buff,"Result: %d \n", sum);
	write(1,buff,strlen(buff));
}
