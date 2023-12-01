#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

unsigned long long permutation(int n, int r) {
     if (n < r) {
        return 0;
    }
    return factorial(n) / factorial(n - r);
}

unsigned long long combination(int n, int r) {
    if (n < r) {
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int choice;
    do {
        cout << "Enter 1 for Permutation (nPr) :"<<endl;
        cout << "Enter 2 for Combination (nCr) :"<<endl;
        cout << "Enter 0 to exit : "<<endl;
        cin >> choice;

        if (choice == 1 || choice == 2) {
            int n, r;
            cout << "Enter value for n: "<<endl;
            cin >> n;
            cout << "Enter value for r: "<<endl;
            cin >> r;

            if (choice == 1) {
                cout << "Permutation (nPr) is : " << permutation(n, r) << endl;
            } else {
                cout << "Combination (nCr) is : " << combination(n, r) << endl;
            }
        } else if (choice != 0) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    cout << "Exiting...";

    return 0;
}