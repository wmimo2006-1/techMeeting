//============================================================================
// Name        : q108.cpp
// Author      : wkym
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int getMaxRec (int n, int *array){
	int sum = 0;
	int N=n*n;
	int i, j, p, m;
//	int i_border=0, y_border=0;
	int tmpSum = 0;

	for (i=0; i<N; i+=n){
		for (p=i; p<N; p+=n){
			tmpSum = 0;

			for (j=0; j<n; j++){

				for (m=i; m<p+1; m+=n){
					tmpSum += array[m+j];
				}
				if (tmpSum < 0){
					tmpSum = 0;
				}

				if (sum < tmpSum){ sum = tmpSum; }

			}

		}

	}

	return sum;

}



int main() {

	while(1){

		int n, i, sum;

		cin >> n;
		int array[n*n];

		for (i=0; i<n*n;i++){
			cin >> array[i];
		}

		if (cin.eof()) { break; }

		sum = getMaxRec(n, array);

		cout << sum << endl;


	}

	return 0;
}
