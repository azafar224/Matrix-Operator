#include<iostream>
using namespace std;
class MatrixOperations
{
private:
    int MATRIX1[10][10];
    int MATRIX2[10][10];
    int MATRIX3[10][10];
    int C1,C2,r1,c1,r2,c2;
public:
   MatrixOperations(){
   }
   void set(){
       while (c1!=111)
       {
           cout<<"Enter c1 for MATRIX1 matrix\n";
       cin>>c1;
       if (c1<10)
       {
           break;
       }
       else{
           cout<<"Space unavailable in array try value between 1-9/n";
       }
       }
        while (r1!=111)
       {
           cout<<"Enter r1 for MATRIX1 matrix\n";
       cin>>r1;
       if (r1<10)
       {
           break;
       }
       else{
           cout<<"Space unavailable in array try value between 1-9/n";
       }
       }
         while (c2!=111)
       {
           cout<<"Enter c2 for MATRIX2 matrix\n";
       cin>>c2;
       if (c2<10)
       {
           break;
       }
       else{
           cout<<"Space unavailable in array try value between 1-9/n";
       }
       }
        while (r2!=111)
       {
           cout<<"Enter r2 for MATRIX2 matrix\n";
       cin>>r2;
       if (r2<10)
       {
           break;
       }
       else{
           cout<<"Space unavailable in array try value between 1-9/n";
       }
       }
   }
 void Matrrix1insertion(){
     cout<<"Enter elements you want to insert in matrix\n";
     for (int i = 0; i < r1; i++)
     {
        for (int j = 0; j < c1; j++)
        {
            cout<<"Enter the element no. "<<i+1<<"*"<<j+1<<":";
            cin>>MATRIX1[i][j];
        }   
     }
 }
      void Matrix2insertion(){
           cout<<"Enter elements you want to insert in matrix\n";
     for (int i = 0; i < r2; i++)
     {
        for (int j = 0; j < c2 ; j++)
        {
            cout<<"Enter the element no. "<<i+1<<"*"<<j+1<<":";
            cin>>MATRIX2[i][j];
        }
     }  
 }
void showMATRIX1()
{
    cout<<"**Elements in Matrix MATRIX1 are*\n";
    for (int i = 0; i < r1; ++i) 
	{
		for (int j = 0; j < c1; ++j) 
		{
	    	cout << " " << MATRIX1[i][j];
        	if (j == c1 - 1)
	      	cout << endl << endl;
		}
	}
}
 void showMATRIX2(){
      cout<<"**Elements in Matrix MATRIX2 are**\n";
     for (int i = 0; i < r2; ++i) {
      for (int j = 0; j < c2; ++j) {
         cout << " " << MATRIX2[i][j];
         if (j == c2 - 1)
            cout << endl << endl;
      }
   }
 }
 void addition(){
       if(r1==r2 && c1==c2){
        cout<<"\nAddition Result of Two Given Matrix is:\n";
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                MATRIX3[i][j] = MATRIX1[i][j]+MATRIX2[i][j];
            }
        }
         for (int i = 0; i < r2; ++i) {
      for (int j = 0; j < c2; ++j) {
         cout << " " << MATRIX3[i][j];
         if (j == c2 - 1)
            cout << endl << endl;
      }
   }
    }
    else{
        cout<<"\nSize is not correct\n";
 }
 }
void subtract(){
       if(r1==r2 && c1==c2){
        cout<<"\nSubtraction Result of Two Given Matrix is:\n";
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                MATRIX3[i][j] = MATRIX1[i][j]-MATRIX2[i][j];
            }
        }
         for (int i = 0; i < r2; ++i) {
      for (int j = 0; j < c2; ++j) {
         cout << " " << MATRIX3[i][j];
         if (j == c2 - 1)
            cout << endl << endl;
      }
   }
    }
    else{
        cout<<"\nSize is not correct\n";
 }
 }
 void equality()
 {
       if(r1==r2 && c1==c2)
       {
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                if(MATRIX1[i][j]!=MATRIX2[i][j])
                cout<<"The given matrices are not equal\n";
            }
        }
        }
    else{
        cout<<"\nSize is not correct\n";
        }
        cout<<"The given matrices are equal\n";
 }
 void multiplication(){
      if(r1==r2 && c1==c2){
        cout<<"\nMultiplication Result of Two Given Matrix is:\n";
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                MATRIX3[i][j] = MATRIX1[i][j]*MATRIX2[i][j];
            }
        }
         for (int i = 0; i < r2; ++i) {
      for (int j = 0; j < c2; ++j) {
         cout << " " << MATRIX3[i][j];
         if (j == c2 - 1)
            cout << endl << endl;
      }
   }
    }
    else{
        cout<<"\nSize is not correct\n";
 }
 }
 void identity(){
     int choose1=0;
     int choose2=0;
      if (c1 != r1)
    {
        cout << "Matrix is not a square matrix!";
        exit(0);
    }
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++)
        {
            if ((MATRIX1[i][j] != 1) && (MATRIX1[j][i] != 0))
            {
                choose1 = 1;
                break;
            }
        }
    }
    if (choose1 == 0){
        cout << "The MATRIX1 array is an identity matrix.\n ";
    }
    else{
        cout << "The MATRIX1 array is not an identity matrix.\n ";
    }
      for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c1; ++j) {
         cout << " " << MATRIX1[i][j];
         if (j == c1 - 1)
            cout << endl << endl;
      }
   }
      if (c2 != r2)
    {
        cout << "Matrix is not a square matrix!";
        exit(0);
    }
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++)
        {
            if ((MATRIX2[i][j] != 1) && (MATRIX2[j][i] != 0))
            {
                choose2 = 1;
                break;
            }
        }
    }
    if (choose2 == 0){
        cout << "The MATRIX2 array is an identity matrix.\n ";
    }
    else{
        cout << "The MATRIX2 array is not an identity matrix.\n ";
    }
      for (int i = 0; i < r2; ++i) {
      for (int j = 0; j < c2; ++j) {
         cout << " " << MATRIX2[i][j];
         if (j == c2 - 1)
            cout << endl << endl;
      }
   }
 }
 void symetrical(){
     int x=0,y=0;
    for (int i = 0; i < r1; i++)
    {
        for( int j = 0; j < c1; j++)
        {
            if (MATRIX1[i][j] != MATRIX1[j][i])
                x = 1;
            else if (MATRIX1[i][j] == -MATRIX1[j][i])
                    y = 1;
        }
    }
    if (x == 0)
        cout << "The matrix is symmetric.\n ";
    else if (y == 1)
        cout << "The matrix is skew symmetric\n ";
    else
        cout << "It is neither symmetric nor skew symmetric\n ";
  for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c1; ++j) {
         cout << MATRIX1[i][j]<< " " ;
         if (j == c1 - 1)
            cout << endl << endl;
      }
   }
 }
};
int main()
{
MatrixOperations Operator;
int choose=1;
Operator.set();
Operator.Matrrix1insertion();
Operator.Matrix2insertion();
while (choose!=0)
{
    cout<<"Press 1 to show matrix MATRIX1 and MATRIX2\n";
    cout<<"Press 2  to Add matrix MATRIX1 & MATRIX2\n";
    cout<<"Press 3  to Subtract matrix MATRIX1 & MATRIX2\n";
    cout<<"Press 4 to Multiply matrix MATRIX1 & MATRIX2\n";
    cout<<"Press 5 to check symmetry\n";
    cout<<"Press 6 to show matrix is identity or not\n";
    cout<<"Press 7 to check equality of matrices\n";
    cout<<"Press 8 to exit program\n";
cin>>choose;
switch (choose)
{
case 1:
Operator.showMATRIX1();
Operator.showMATRIX2();
    break;
case 2:
Operator.addition();
break;
case 3:
Operator.subtract();
break;
case 4:
Operator.multiplication();
break;
case 5:
Operator.symetrical();
break;
case 6:
Operator.identity();
break;
case 7:
Operator.equality();
break;
case 8:
choose=0;
break;
}
}
}//end main
