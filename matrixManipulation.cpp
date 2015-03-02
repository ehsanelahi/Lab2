#include <iostream>
#include "matrix.h"

#define ROWS 3
#define COLUMNS 3
using namespace std;


/*int main()
{

	 Matrix mat ;



  /* Initializing 1st Array*/

	 /*for(int i=0; i<ROWS; i++)
	{
		for(int j=0; j<COLUMNS; j++)
		{
			mat.arr1[i][j] = 2;
		}

	}

     /* Initializing 2nd Array*/

	 /*for(int i=0; i<ROWS; i++)
	{
		for(int j=0; j<COLUMNS; j++)
		{
			mat.arr2[i][j] = 1;
		}

	}


    	
    	  mat.add();
   
    
    	 mat.subtract();
    	
    	 mat.multiply();
   

 

    return 0;



}
*/

 void Matrix :: add()
 {
   for(int i=0; i<ROWS; i++)
	{
		for(int j=0; j<COLUMNS; j++)
		{
           Addoutput[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
     
     /*cout<<"Result is \n";
	for(int i=0; i<ROWS; i++)
	{
		for(int j=0; j<COLUMNS; j++)
		{
           cout<< output[i][j]<<"  " ;
		}

		cout<<"\n";
	}
*/

}




	void Matrix :: subtract()
	{
		for(int i=0; i<ROWS; i++)
	    {
		for(int j=0; j<COLUMNS; j++)
		  {
           Suboutput[i][j] = arr1[i][j] - arr2[i][j];
		  }
	    }
     
     /*cout<<"Result is \n";
	for(int i=0; i<ROWS; i++)
	   {
		for(int j=0; j<COLUMNS; j++)
		{
           cout<< output[i][j]<<"  " ;
	    }

		cout<<"\n";
	    }
*/

     }

   void Matrix :: multiply()
     {     
	
        for(int i=0;i<ROWS;i++)
        {
            for(int j=0;j<COLUMNS;j++)
            {
                Muloutput[i][j]=0;
                for(int k=0;k<ROWS;k++)
                {
                    Muloutput[i][j]=Muloutput[i][j]+arr1[i][k]*arr2[k][j];
                }
            }
        }

     /*  cout<<"Result is \n";

        for(int i=0; i<ROWS; i++)
	   {
		for(int j=0; j<COLUMNS; j++)
		{
           cout<< output[i][j]<<"  " ;
	    }

		cout<<"\n";
	    }
*/




	 }
