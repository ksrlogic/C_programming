#include <stdio.h>

void turn(int (*argv)[4])
{
	int newMaps[4][4];
	
	int i, j;
	for(i=3;i>=0;i--)
	{
		for(j=0;j<4;j++)
			{
				newMaps[j][3-i] = argv[i][j];
			}
		}
	
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			argv[i][j] = newMaps[i][j];
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ", argv[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


int main(void)
{
	int maps[4][4]= {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	
	turn(maps);
	turn(maps);
	turn(maps);
	
	
	return 0;
}
