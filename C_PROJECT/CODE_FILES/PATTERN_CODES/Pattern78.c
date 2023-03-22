


	//	Pattern78.
	//
	//	*	
	//	*	*		
	//	*	*	*	
	//	*	*	*	*
	//	*	*	*
	//	*	*
	//	*


	#include<stdio.h>


	int Pattern78(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){		

				if(row<=rows/2)
					temp = row;
				else
					temp = rows+1-row;
			
				for(int col = 1; col <= temp; col++)
					printf("*\t");

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern78(rows*2-1);
	}



