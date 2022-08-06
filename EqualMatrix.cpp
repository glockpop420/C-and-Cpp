#include<iostream>
using namespace std;
int main()
{
	int i, j, r, c, isEqual;
	cout << "\nPlease Enter the rows and Columns a Equal Matrix =  ";
	cin >> r >> c;
	int a[r][c], b[r][c];
	cout << "\nPlease Enter the First Matrix Items =  ";
	for(i = 0; i < r; i++)	
	{
		for(j = 0; j < c; j++)
	    {
			cin >> a[i][j];
		}		
	}	
	cout << "\nPlease Enter the Second Matrix Items =  ";
	for(i = 0; i < r; i++)	
	{
		for(j = 0; j < c; j++) 
		{
			cin >> b[i][j];
		}		
	}
	isEqual = 0; 	
 	for(i = 0; i < r; i++)
  	{
   		for(j = 0; j < c; j++)
    	{
      		if(a[i][j] != b[i][j])
			{
			  	isEqual = 1;
			  	break;
			}    
   	 	}
  	}
 	if(isEqual == 0)
 	{
 		cout << "\nMatrix a is Equal to Matrix b";		
	}
	else
	{
		cout << "\nMatrix a is Not Equal to Matrix b";
	}	
 	return 0;
}
