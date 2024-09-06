#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "debug.hpp"
using namespace std;
/******************************** 
* Write a function that takes as input:
* the string string0
* and an integer
* The function returns:
* nothing
* The functions should loop such that it prints that string the integer number
* of times. So if the string was "glub" and the int was 5, the
* function would print out
* >>glubglubglubglubglub (or, alternatively,
* >>glub
* glub
* glub
* glub
* glub
*
* Point: to make sure you're comfortable with a basic loop
*
* (See note at the top of this lab on how to make things print on the same
line below)
/*****************************************************/
void func1(string s, int num) {
    for (int i = 0; i <= num; i++) {
        cout << s;
    }
    cout << endl;
}
/*****************************************************
func2: (2 pts)
* Write a function that takes as input:
* the string below (string 1) and
* the length of the string.
* The function returns:
* nothing
* This function should use a while loop to print out every other
* character, starting at 1
* Point: I want to make sure you can loop through a string and that you
* know how to use a while loop
*/
void func2(string s, int len) {
    int i = 1;
    while (i < len){
        cout << s[i];
        i += 2;
    }
    cout << endl;
}
/*****************************************************
func3: (2 pts)
* write a function that takes as input:
* a string and
* the length of the string.
* The function returns:
* nothing
* Using a for loop, print out every other character in the string, starting
* at the last index in the string and working back to the first character
*
* Point: I want to make sure you know how to use a for loop.
*/

void func3(string s, int len) {
    for(int i = len; i < 1; i -= 2) {
        cout << s;
    }
    cout << endl;
}
/*****************************************************
func4: (2 pts)
* write a function that takes as input:
* an array of ints, and
* the length of an array.
* It returns:
* an int.
* The function returns the average of the array values.
*
* Point: I want to make sure you know how to traverse an array, and sum
* numbers in an array, and return a value.
*/
int func4(int arr[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++){
        sum += arr[i];
    }
    return sum/len;
}
/*****************************************************
func5: (3 pts)
* write a function that takes as input:
* an array of ints,
* the length of an array,
* and an integer
* It returns:
* an int.
* The function should find the value in the array closest to the integer, and
* return the index of that integer
*
* Point: To make sure you understand how to update values in a loop
*/
int func5(int arr[], int val, int len) {
    int closestIndex = 0; // Initialize the closest index to the first element
    int minDifference = abs(arr[0] - val); // Calculate the difference between the first element and val

    for (int i = 1; i < len; i++) { // Start the loop from the second element
        int currentDifference = abs(arr[i] - val); // Calculate the difference between the current element and val

        if (currentDifference < minDifference) { // If the current difference is smaller than the minimum difference found so far
            minDifference = currentDifference; // Update the minimum difference
            closestIndex = i; // Update the index of the closest element
        }
    }
    return closestIndex;
}
/*****************************************************
func6: (3 pts)
* write a function that takes as input:
* an array of ints,
* the length of an array, and
* an integer (which acts as an index into the array).
* It returns:
* nothing.
* The function should find the smallest value in the array, and swap
* that value with the value at the index integer.
* For instance, if you've got the following array:
* [8,3,5,1,2,7,6,9,4]
* and the index sent in was 7:
* the smallest value in the array is 1, at index 3.
* The value at index 7 is 9. So 1 and
* 9 would be swapped in the array, resulting in:
9
* [8,3,5,9,2,7,6,1,4]
*
* Point: To make sure you can find (and update) the smallest value, and
* can swap
*/
void func6(int arr[], int ind, int len) {
    int minIndex = 0;
    for (int i = 1; i < len; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    // Swap the smallest element with the element at the provided index
    int temp = arr[ind];
    arr[ind] = arr[minIndex];
    arr[minIndex] = temp;
}
/*****************************************************
func7: (4 pts)
* write a function that takes as input:
* string, an array of ints,
* the length of an array,
* 2 ints that will act as indices into the array of ints
* and a boolean value that is set true if the function should print out
* the values in the string (as described below) or false if the function
* should not print.
* The function returns:
* nothing
*
* The function shifts all values to the right between the first and second
index parameters,
* and replaces the value at the first index with the value at the last index.
* So, for instance, if the array was:
* [1,2,3,4,5,6,7,8,9]
* and the 2 parameters were:
* 3, 7 (or 7, 3 - you don't know the order),
* the result should be
* [1,2,3,8,4,5,6,7,9]
*
* The function should then use the array numbers as indices into the string
* parameter and should print out those characters.
* an integer (which acts as an index into the array).
*
* Point: To emphasize the number of steps needed in inserting values into an
array...
*/
void func7(string s, int arr[], int len, int i1, int i2,bool do_pr) {
    if (i1 > i2) {
        swap(i1, i2);
    }

    // Shift values to the right between i1 and i2
    int lastValue = arr[i2];
    for (int i = i2; i > i1; i--) {
        arr[i] = arr[i - 1];
    }
    // Replace value at i1 with the original value at i2
    arr[i1] = lastValue;

    // If do_pr is true, print characters from the string based on the array values as indices
    if (do_pr) {
        for (int i = 0; i < len; i++) {
            int idx = arr[i];
            if (idx >= 0 && idx < s.size()) {  // Ensure the index is within the string's bounds
                cout << s[idx];
            }
        }
        cout << endl;
    }
}
/***************************************************
func8: (5 pts)
* write a function that takes as input:
* a string,
* the length of the string,
* an array of integers,
* and the length of the array of numbers.
* The function returns:
* nothing
* For each of the numbers in the array of numbers, the function adds up the
* digits in the number. It then calculates an index into the string(s6,
below) by finding the remainder when dividing by the string size.
* So if the string is: "grandma" the length of the string is 7.
* Say the number in the array of numbers is 5497
* Adding the digits results in 25.
* If we divide by 7, the remainder is 3.
* So the resulting character would be 'n' (which is at index 3 in the string)
* The function should print out the letter in the string at that index.
* Point: number manipulation
*/
void func8(string s, int len, int arr[], int len2) {
    for (int i = 0; i < len2; i++) {
        int num = arr[i];
        int sum = 0;

        // Add up the digits of the number
        while (num > 0) {
            sum += num % 10;  // Get the last digit and add it to the sum (5497 % 10 = 7 then adds to sum)
            num /= 10;        // Remove the last digit
        }

        // Calculate the remainder by dividing the sum of digits by the length of the string
        int index = sum % len;

        // Output the character at the index in the string
        cout << s[index];
    }
    cout << endl;  // Print a new line at the end
}
/***************************************************
func9: (8 pts)
* write a function that takes as input:
* a string,
* 2 arrays of ints,
* 2 ints (the lengths of both of those arrays)
* The function returns:
* nothing
* Note: BOTH of the input int arrays are in order, from smallest integer to
* largest integer!
* The functions creates a new array whose length is the length of the first
* array plus the length of the second array. The function then combines the
* first array and the second array into the newly created array such that all
* the values are in order.
* In other words, if the two arrays are:
* [2,4,6,7,8,8,14,15] and [1,2,3,5,6]
* the resulting new array would be:
* [1,2,2,3,4,5,6,6,7,8,8,14,15]
*
* The function then uses the integers in the array to print out the
* corresponding character in the input string,
* e.g.,
* If the input string was "saligatorihaboiwhbwoihbw"
* the char at index1 is a, the char at index2 is s, etc. so the output would
be:
* alligattorriw (yeah, not a word, but you get the idea...)
*/
void func9(string s9,int arr1[],int arr2[], int len1,int len2) {
    int newLen = len1 + len2;
    int* merge = new int[newLen];        // Wouldn't allow me to initialize without memory allocation
        // Step 2: Merge two sorted arrays into one
    int i = 0, j = 0, k = 0;

    while (i < len1 && j < len2) {
        if (arr1[i] <= arr2[j]) {
            merge[k] = arr1[i];
            i++;
        } else {
            merge[k] = arr2[j];
            j++;
        }
        k++;
    }

    // If there are remaining elements in arr1
    while (i < len1) {
        merge[k] = arr1[i];
        i++;
        k++;
    }

    // If there are remaining elements in arr2
    while (j < len2) {
        merge[k] = arr2[j];
        j++;
        k++;
    }

    // Step 3: Use the merged array to print characters from the string
    for (int m = 0; m < newLen; m++) {
        // Print the character at the index of mergedArr[m]
        cout << s9[merge[m]];
    }
    cout << endl;
    delete[] merge;
}
/***************************************************
func10: (9 pts)
* write a function that takes as input:
* a string,
* an array of integers
* an integer that indicates the length of the array
11
* The function returns:
* nothing
*
* The functions takes the array of integers, and removes all duplicates
* (there is more one way to do this).
*
* In other words, if you've got:
* 8,3,6,7,8,1,4,3,6,2,3
* the resulting array (aka sub-array) would be:
* 8,3,6,7,1,4,2
*
* The function then uses the remaining integers to print out the
* corresponding character in the input string,
* Point: array manipulation, fun challenge!
*/
void func10(string str10,int arr[],int len) { 
    int* temp = new int[len];  // Temporary array to store unique values
    int newLen = 0; // Length of the array without duplicates
    
    for (int i = 0; i < len; i++) {
        bool found = false;
        // Check if arr[i] already exists in the temp array
        for (int j = 0; j < newLen; j++) {
            if (arr[i] == temp[j]) {
                found = true;
                break;
            }
        }
        // If not found, add it to temp array
        if (!found) {
            temp[newLen] = arr[i];
            newLen++;
        }
    }

    // Print the corresponding characters from the string
    for (int i = 0; i < newLen; i++) {
        // Make sure the index is within bounds of the string length
        if (temp[i] >= 0 && temp[i] < str10.length()) {
            cout << str10[temp[i]];  // Print character at index temp[i]
        }
    }
    cout << endl;
}
/***************************************************
func11: (5 pts)
* write a function that takes as input:
* a string
* the length of the string,
* and a square matrix dimension size.
* The function returns:
* nothing
* The function creates a matrix of size by size and fills in the characters
* such that the first size characters are in the first row, the second size
* characters are in the second row, etc.
* Then the function should print out the diagonal characters (0,0 to
size,size).
* Point: creating and accessing a matrix
*
* */
void func11(string s7,int len,int msize) {
    char** matrix = new char*[msize];
    for (int i = 0; i < msize; i++) {
        matrix[i] = new char[msize];
    }

    // Fill the matrix with characters from the string
    int k = 0;  // Index to keep track of characters in the string
    for (int i = 0; i < msize; i++) {
        for (int j = 0; j < msize; j++) {
            if (k < len) {
                matrix[i][j] = s7[k++];
            } else {
                matrix[i][j] = ' ';  // Fill remaining spaces with blank if string is shorter
            }
        }
    }

    // Print the diagonal characters (i, i)
    
    for (int i = 0; i < msize; i++) {
        cout << matrix[i][i];
    }
    cout << endl;

    // Clean up the dynamically allocated memory
    for (int i = 0; i < msize; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
/***************************************************
func12: (5 pts)
* write a function that takes as input:
* a string
* the length of the string,
* and a square matrix dimension size.
* The function returns:
* nothing
* The function creates a matrix of size by size and fills in the characters
* such that the first size characters are in the first row, the second size
* characters are in the second row, etc.(so far just like the function above)
* Then the function should print out the reverse diagonal characters
* Top right corner to bottom left corner
* Point: creating and accessing a matrix
*/

void func12(string s,int len,int msize){
    char** matrix = new char*[msize];
    for (int i = 0; i < msize; i++) {
        matrix[i] = new char[msize];
    }

    // Fill matrix with characters from the string
    int k = 0;  // Index to keep track of characters in the string
    for (int i = 0; i < msize; i++) {
        for (int j = 0; j < msize; j++) {
            if (k < len) {
                matrix[i][j] = s[k++];  // Fill with string characters
            } else {
                matrix[i][j] = ' ';  // Fill remaining cells with spaces if string is shorter
            }
        }
    }

    for (int i = 0; i < msize; i++) {
        cout << matrix[i][msize - 1 - i];  // Access the reverse diagonal
    }
    cout << endl;

    for (int i = 0; i < msize; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
/***************************************************
func13: (6 pts)
* write a function that takes as input:
* a string,
* the length of the string,
* and a matrix dimension size.
* The function returns:
* nothing
* THe function creates a matrix of size by size and fills in the characters
* such that the first size characters are in the first row, the second size
* characters are in the second row, etc.(so far just like the functions
above)
* (Then the function should print out the reverse diagonal characters
* Then the function should print the columns from top to bottom. So, for
* instance, if the string was,
* "abcdefghi" and the matrix size was 3, the resulting matrix would be:
* abc
* def
* ghi
* and what would be printed out would be:
* adgbehcfi
*/
void func13(string s,int len,int msize) {
    char** matrix = new char*[msize];
    for (int i = 0; i < msize; i++) {
        matrix[i] = new char[msize];
    }

    int idx = 0; // Index for string
    for (int i = 0; i < msize; ++i) {
        for (int j = 0; j < msize; ++j) {
            if (idx < len) {
                matrix[i][j] = s[idx];
                ++idx;
            } else {
                matrix[i][j] = ' '; // Fill remaining spaces with space if string is too short
            }
        }
    }

    for (int j = 0; j < msize; ++j) { // Column iteration
        for (int i = 0; i < msize; ++i) { // Row iteration within each column
            cout << matrix[i][j];
        }
    }
    cout << endl;
}