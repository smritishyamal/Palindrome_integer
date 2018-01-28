//
//  main.cpp
//  Palindrome_number
//
//  Created by Smriti Shyamal on 2018-01-28.
//  Copyright © 2018 Smriti Shyamal. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

class Solution{
public:
    bool isPalindrome(int x){
        bool b = 0;
        bool divicheck = 1;
        int divi = 10;
        int digicount = 1;
        // First count the number of digits in the given integer
        while (divicheck == 1){
            divicheck = x/divi;
            if (divicheck == 1) {
                digicount = digicount + 1;
                divi = divi * 10;
            }
        }
        int start = x;
        int end = x;
        // Compare First and last and then move ahead
        for (int i = 0; i < digicount/2; i++) {
            int g = pow(10, (digicount-i-1));
            int startdigit = start/g;
            int enddigit = end % 10;
            if (startdigit != enddigit) {
                cout << "Not palindrome at (digit from start) " << i+1 << endl;
                b = 1;
                break;
            }
            start = start % g;
            end = end/10;
        }
        return b;
    }
} sol;

int main(){
    int a = 232141232;
    cout << "The given number is " << a << endl;
    bool b = sol.isPalindrome(a);
    if (b == 0) {
        cout << "The number is palindrome." << endl;
    }
    return 0;
}
