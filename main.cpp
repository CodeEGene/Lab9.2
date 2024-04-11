#include<iostream>

using namespace std;

bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjecentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);

int const arraySize = 6;

int numArray[arraySize];


int main() {
	for (int i = 0; i < 6; i++) {
		cout << "Enter Integer #" << i <<": ";
		cin >> numArray[i];
	}

	cout << hasDuplicates(numArray, 6);

	return 0;
}

bool isSortedIncreasing(int values[], int size) {
	int placeHolder = values[0];
	for (int i = 1; i < size; i++) {
		if (values[i] > placeHolder || values[i] == placeHolder) {
			placeHolder = values[i];
		}
		else {
			return false;
		}
	}
	return true;
}

bool isSortedDecreasing(int values[], int size) {
	int placeHolder = values[0];
	for (int i = 1; i < size; i++) {
		if (values[i] < placeHolder || values[i] == placeHolder) {
			placeHolder = values[i];
		}
		else {
			return false;
		}
	}
	return true;
}
bool hasAdjecentDuplicates(int values[], int size) {
	int placeHolder = values[0];
	for (int i = 1; i < size; i++) {
		if (values[i] == placeHolder) {
			return true;
		}else {
			placeHolder = values[i];
		}
	}
	return false;
}
bool hasDuplicates(int values[], int size) {
	for (int i = 0; i < size; i++) {
		int checkValue = values[i];
		for (int j = i+1; j < size; j++) {
			if (checkValue == values[j]) {
				return true;
			}
		}
	}
	return false;
}