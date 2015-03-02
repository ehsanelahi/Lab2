#include <limits.h>
#include "gtest/gtest.h"
#include "matrix.h"
#include <iostream>

using namespace std;


  int expectedAdd[3][3] = {
  	{3, 3, 3},
  	{3, 3, 3},
  	{3, 3, 3}

  };

    int expectedSub[3][3] = {
  	{1, 1, 1},
  	{1, 1, 1},
  	{1, 1, 1}
  	
  };

    int expectedMul[3][3] = {
  	{6, 6, 6},
  	{6,6,6},
  	{6, 6,6}
  	
  };

TEST(AddTest, Blah) {

      Matrix m;	
    	
    

    for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			m.arr1[i][j] = 2;
		}

	}

   for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			m.arr2[i][j] = 1;
		}

	}

      m.add();

   for(int i=0; i<3; i++)
   {
   	 for(int j=0; j<3; j++)
   	{
        // cout<< m.Addoutput[i][j]<<" ";
           EXPECT_EQ(expectedAdd[i][j], m.Addoutput[i][j]);
   	}
    
   //cout<<"\n";

   }
   
  
}


TEST(SubTest, Blah) 
{
  Matrix m;
  

    for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			m.arr1[i][j] = 2;
		}

	}

   for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			m.arr2[i][j] = 1;
		}

	}

  m.subtract();

	 for(int i=0; i<3; i++)
   {
   	 for(int j=0; j<3; j++)
   	{
    EXPECT_EQ(expectedSub[i][j], m.Suboutput[i][j]);

   //cout<< m.Suboutput[i][j]<<" ";

     }

  //cout<<"\n";
   	
   }
  
}

TEST(MulTest, Blah)
 {
         Matrix m;

    for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			m.arr1[i][j] = 2;
		}

	}

   for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			m.arr2[i][j] = 1;
		}

	}

     m.multiply();

  for(int i=0; i<3; i++)
   {
   	 for(int j=0; j<3; j++)
   	{
         EXPECT_EQ(expectedMul[i][j], m.Muloutput[i][j]);
        //cout<< m.Muloutput[i][j]<<" ";

      

     }

      //cout<<"\n";
   	
   }
}
