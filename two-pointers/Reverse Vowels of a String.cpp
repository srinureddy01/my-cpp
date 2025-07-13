#include <iostream>
#include <string>
#include <cctype>
#include <algorithm> // For std::swap

using namespace std;

// Function to check if a character is a vowel
bool isVowel(char c) {
    // You can implement this function here
    c = tolower(c);
    return (c == 'a'|| c== 'e' || c == 'i' || c == 'o' || c == 'u');
  
 
}

void reverseVowels(string &s) {
    int left_pointer = 0;
    int right_pointer = s.length() - 1;

    // Use a while loop with the two pointers
    while (left_pointer < right_pointer) {
        
       while(left_pointer < right_pointer && !isVowel(s[left_pointer]))
       {
           left_pointer++;
       }
       while(left_pointer < right_pointer && !isVowel(s[right_pointer]))
        {
            right_pointer--;
        }
        if(left_pointer < right_pointer)
        {
            swap(s[left_pointer] , s[right_pointer]);
            left_pointer++;
            right_pointer--;
        }
        // Find the next vowel from the left
        // Find the next vowel from the right

        // If both are found, swap them

        // Move the pointers
    }
}

int main() {
    string s = "aeiou";
    reverseVowels(s);
    cout << s << endl; // Should print "leotcede"
    return 0;
}
