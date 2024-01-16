//MODULE: 4_OOPS Concept_Inheritance Polymorphism
/*Question:9_Write a Program of Two 1D Matrix Addition using Operator Overloading.*/

#include <iostream>
using namespace std;

class Matrix 
{
	private:
   		int size;
   		int *elements;

	public:
    Matrix(int s):size(s) 
	{
        elements=new int[size];
    }

    Matrix operator+(const Matrix& other)
	{
        if (size != other.size)
		{
            cerr<<"Error: Matrices must have the same size for addition."<<endl;
            return Matrix(0);
        }

        Matrix result(size);

        for (int i = 0; i < size; ++i) 
		{
            result.elements[i] = elements[i] + other.elements[i];
        }

        return result;
    }
    bool isValid()
	{
        return size!=0;
    }
    void inputMatrix() 
	{
        cout<<"Enter elements of the matrix:"<<endl;
        for(int i = 0; i < size; ++i) 
		{
            cout<<"Element "<<i + 1<<": ";
            cin>>elements[i];
        }
    }

    void displayMatrix()
	{
        cout<<"Matrix: [";
        for(int i = 0; i < size; ++i) 
		{
            cout<<elements[i];
            if(i < size - 1)
			{
                cout<<", ";
            }
        }
        cout<<"]"<<endl;
    }

    ~Matrix() 
	{
    	delete[] elements;
    }
};

int main() 
{
    int size;

    cout<<"Enter the size of the matrices: ";
    cin>>size;


    Matrix matrix1(size);
    Matrix matrix2(size);

    // Input elements for the matrices
    cout << "\nEnter elements for the first matrix:" << endl;
    matrix1.inputMatrix();

    cout << "\nEnter elements for the second matrix:" << endl;
    matrix2.inputMatrix();

    // Perform matrix addition using overloaded '+'
    Matrix resultMatrix = matrix1 + matrix2;

    // Display the matrices and the result if valid
    cout << "\nMatrix 1:" << endl;
    matrix1.displayMatrix();

    cout << "\nMatrix 2:" << endl;
    matrix2.displayMatrix();

    // Display result if matrix addition was successful
    if (resultMatrix.isValid()) {
        cout << "\nResultant Matrix (Matrix1 + Matrix2):" << endl;
        resultMatrix.displayMatrix();
    } else {
        cout << "\nError occurred during matrix addition. Exiting." << endl;
    }

    return 0;
}


