 #define ROWS 3
 #define COLUMNS 3

 class Matrix 
 {

 	public:
        int arr1[ROWS][COLUMNS], arr2[ROWS][COLUMNS];
	int Addoutput[ROWS][COLUMNS];
        int Suboutput[ROWS][COLUMNS];
        int Muloutput[ROWS][COLUMNS];




   void add();
   void subtract();
   void multiply();

 };
