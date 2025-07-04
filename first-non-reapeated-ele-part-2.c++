#include <iostream>
#include <string> // Essential for std::string

using namespace std; // Using namespace std

int main()
{
    string input_txt = "avab"; // Try with "aabb", "yellow", "leetcode", "a"
    int input_len = input_txt.length();
    bool found_non_repeating = false; // Better name: indicates if a non-repeating char was found

    for (int i = 0; i < input_len; i++)
    {
        bool is_current_char_repeating = false; // Flag for the character at input_txt[i]

        for (int j = 0; j < input_len; j++)
        {
            // Compare current character with all other characters (excluding itself)
            if (i != j && input_txt[i] == input_txt[j])
            {
                is_current_char_repeating = true; // It repeats!
                break;                            // No need to check further for this 'i'
            }
        }

        // If 'is_current_char_repeating' is false after checking all other characters
        if (!is_current_char_repeating)
        {
            cout << i << endl;       // Output the index
            found_non_repeating = true; // Set flag to true
            break;                   // Found the first one, exit the main loop
        }
    }

    // This check MUST happen *after* the entire outer loop has finished executing.
    // If 'found_non_repeating' is still false here, it means the loop completed
    // without finding any unique character.
    if (!found_non_repeating)
    {
        cout << -1 << endl; // Output -1
    }

    return 0;
}
