#include <iostream>
using namespace std;
int main() {
int n;
//asking for size of pattern
cout << "Enter number of stars for size of the square pattern: ";
cin >> n;
//print stars and spaces
for(int i = 1; i <= n; ++i) {
for(int j = 1; j <= n; ++j) {
cout << "* ";     
}
//go to next line
cout << endl;   
}
return 0;
}

