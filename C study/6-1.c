#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num=0, sum=0 ;
	int status;		
	status = scanf("%d", &num); //(������ ������ status�� �����)

	while (status ==1)
	{
		sum += num;
		printf("Enter an integer (q to quit) : " );
		status = scanf("%d", &num);

	}

	printf("Sum = %d\n", sum);

	return 0;

}