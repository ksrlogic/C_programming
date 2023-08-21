#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	int maps[num][num];
	
	int rowTg = num;
	int colTg = num-1;
	
	int count = 1;
	int isRow = 1;
	
	int rowReversed = 0;
	int colReversed = 0;
	
	int x = 0;
	int y = 0;
	
	while(count<=num*num)
	{
//		printf("현재 X Y 값 %d, %d \n", x, y);
		if(isRow == 1) //  가로 
		{
			int i;
			for(i=0;i<rowTg;i++){
				if(rowReversed == 0)
				{
					maps[x][y] = count;
					count += 1;
					if(i != rowTg - 1)
						y += 1;
				}
				else
				{
					maps[x][y] = count;
					count += 1;
					if(i != rowTg - 1)
						y -= 1;
				}

			}
			
			
			
			if(rowReversed == 0)
			{
				rowReversed = 1;
				x += 1;
			}
				
				
			else
			{
				rowReversed = 0;
				x -= 1;
			}
			rowTg -= 1;
			isRow = 0;
		}
		
		
		else  //세로  
		{
			int i;
			for(i=0;i<colTg;i++)
			{
				if(colReversed == 0)
				{
					maps[x][y] = count;
					count += 1;
					if(i != colTg - 1)
						x += 1;
				}
				else
				{
					maps[x][y] = count;
					count += 1;
					if(i != colTg - 1)
						x -= 1;
				}
			 }


			if(colReversed == 0){
				colReversed = 1;
				y -= 1;
			}
				
			else{
				colReversed = 0;
				y+=1;
			}
			
				
			colTg -= 1;
			isRow = 1;
		} 

	}
	
	int k , j;
	for(k=0; k<num; k ++)
	{
		for(j=0;j<num;j++)
		{
			printf("%d ", maps[k][j]);
		}
		printf("\n");
	}
	return 0;
}
