#include<iostream>
using namespace std;

int reverseNumber(int num, int temp) {
    return (num > 0) ? reverseNumber(num / 10, temp * 10 + (num % 10)) : temp;
}

int main() {
    int num = 121;
    int val = reverseNumber(num, 0);

    (num == val) ? cout << "It's a palindrome" : cout << "It's not a palindrome";
    return 0;
}
