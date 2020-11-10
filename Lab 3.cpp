// ===================================================
// Program: Lab 3 - PrefixAverages
// ===================================================
// Programmers: Aaron Geesink and Mohammad
// Class: CS 1D - M W 5:00PM
// ===================================================

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

vector<float> prefixAverages1(vector<float> X);
vector<float> prefixAverages2(vector<float> X);

int main()
{
	const int n = 10000;

	vector<float> numbers;
	for (int i = 0; i < n; i++)
	{
		numbers.push_back(i + 1);
	}

	clock_t start;
	clock_t end;
	clock_t clockTicksTaken;

	start = clock();
	vector<float> average1 = prefixAverages1(numbers);
	end = clock();
	clockTicksTaken = end - start;
	double duration = clockTicksTaken / (double)CLOCKS_PER_SEC;
	cout << "prefixAverages1 Time: " << duration << '\n';

	start = clock();
	vector<float> average2 = prefixAverages2(numbers);
	end = clock();
	clockTicksTaken = end - start;
	duration = clockTicksTaken / (double)CLOCKS_PER_SEC;
	cout << "prefixAverages2 Time: " << duration << '\n';

	cout << "\nFirst four inputs:\n";
	for (int i = 0; i < 4; i++)
	{
		cout << numbers[i] << '\t';
	}
	cout << endl << endl;

	cout << "First four prefixAverages1 outputs:\n";
	for (int i = 0; i < 4; i++)
	{
		cout << average1[i] << '\t';
	}
	cout << endl << endl;

	cout << "First four prefixAverages2 outputs:\n";
	for (int i = 0; i < 4; i++)
	{
		cout << average2[i] << '\t';
	}
	cout << endl << endl;

	system("pause");
	return 0;
}

vector<float> prefixAverages1(vector<float> X)
{
	vector<float> A;
	for (int i = 1; i < X.size(); i++)
	{
		float a = 0;
		for (int j = 0; j < i; j++)
		{
			a = a + X[j];
		}
		A.push_back(a / i);
	}
	return A;
}

vector<float> prefixAverages2(vector<float> X)
{
	vector<float> A;
	float s = 0;
	for (int i = 0; i < X.size() - 1; i++)
	{
		s = s + X[i];
		A.push_back(s / (i + 1));
	}
	return A;
}

// ===================================================