//Matrix Addition
//Olivia Walker

#include <iostream>
using namespace std;

int main()
{
	int i,j,a[2][2], b[2][2],c[2][2], sum[2][2];//Resultant matrix is stored in c

	//Input for matrix A
	cout << "please enter 4 integer values for Matrix A \n";

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> a[i][j];
		}
	}
	//input for matrix B
	cout << "please enter 4 integer values for Matrix B \n";

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> b[i][j];
		}
	}


	//output for matrix A
	cout << "Matrix A \n";

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}

	//output for matrix B
	cout << "Matrix B \n";

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << b[i][j] << "\t";
		}
		cout << "\n";
	}

	//Adding 2 matrixes
	for (i = 0; i < j; ++i) {
		for (j = 0; j < i; ++j)
			sum[i][j] = a[i][j] + b[i][j];
	}

	//Displaying the resultant sum matrix
	cout << endl << "sum of two matrix is: " << endl;
	for (i = 0; i < j; ++i) 
		for (j = 0; j < i; ++j){
			cout << sum[i][j] << " ";
			if (j == i - 1)
				cout << endl;
	}


}


