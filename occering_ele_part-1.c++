#include <iostream>
using namespace std;

int main()
{
    // Here the list is given so that if any repeated element is found, return true; else return false
    int elements[] = {2, 1, 3, 4, 1};
    int input_length = sizeof(elements) / sizeof(elements[0]);
    cout << input_length << endl;

    int flag = 0; // Flag to indicate if a repeated element is found

    for(int i = 0; i < input_length; i++)
    {
        for(int j = i + 1; j < input_length; j++) // Start j from i + 1 to avoid unnecessary comparisons
        {
            if(elements[i] == elements[j])
            {
                flag = 1; // Found a repeated element
                break; // Exit the inner loop
            }
        }
        if(flag == 1)
        {
            cout << "true" << endl; // Print true if a repeated element is found
            break; // Exit the outer loop
        }
    }

    if(flag == 0) // If no repeated elements were found
    {
        cout << "false" << endl; // Print false
    }

    return 0; // Return statement for main function
}
