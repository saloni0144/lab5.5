#include <iostream>
using namespace std;
int main() {
int n;
//ask for size of pattern
cout << "Enter number of stars for size of the invcderted pyramid pattern: ";
cin >> n;
for(int i = n; i >= 1; i--) {
//print spaces
for(int j = n; j > i; j--) {
cout << " ";
}
//print stars
for(int k = 1; k < (i*2); k++) {
cout << "*";
}
//go to next line
cout << endl;
}
return 0;
}
