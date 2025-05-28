// Radhika Agrawal
// HW 2 - CS210
// Functions Using Loops

#include <iostream>
#include <vector>

using namespace std;

// Function # 1
// Pre: "v" is a vector of integers. "pos" is a position inside v 
// Post: Returns the largest value in the range v[pos]...v[v.size()-1]
int Maximum(const vector<int>& v, int pos){
    int maximum = v[pos];
    for(int i = pos + 1; i < v.size(); i++){
        if(v[i] > maximum)
            maximum = v[i];
    }
    return maximum;
}

// Function # 2
// Pre: "n” is a positive integer in the range 0 to 30.
// Post: returns the value of 2^n
int Two_To_The(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result = result * 2;
    }
    return result;
}

// Function # 3
// Pre: ”s” is a string. "key" is a character. "pos" is a position in s.
// Post: returns the number of times "key" appears in s, starting at s[pos]
int Num_Occurrences(string s, char key, int pos){
    int total = 0;
    for(int i = pos; i < s.size(); i++){
        if(s[i] == key)
            total = total + 1;
    }
    return total;
}

// Function # 4
// Pre: "n" is a positive integer
// Post: Prints to the screen the word "Please" n times, then "Can I have some candy? "
void Whiny_Kid(int n){
    for(int i = 1; i <= n; i++){
        cout << "Please ";
    }
    
    cout << "Can I have some candy?";
}

int main(){
    // START Testing for Function # 1
    // Creating a vector from user-inputted values
    cout<< "Enter the number of elements in the vector: " << endl;
    int size;
    cin >> size;

    vector<int> v(size);
    
    for(int i = 0; i < size; i++){
        cout << "Enter element that is at position " << i << " in the vector: " << endl;
        int element;
        cin >> element;
        
        v.push_back(element);
    }
    
    cout << "Enter the starting position of the range in which you want to find the maximum value: " << endl;
    int pos;
    cin >> pos; // Assuming tha position entered is valid
    
    cout << "The maximum value in the requested range is " << Maximum(v, pos) << endl;
    // END Testing for Function # 1
    
    // START Testing for Function # 2 START
    cout << "Enter a positive integer in the range 0-30: " << endl;
    int n;
    cin >> n;
    
    cout << "The value of 2 raised to the power of " << n << " is " << Two_To_The(n) << endl;
    // END Testing for Function # 2
    
    // START Testing for Function # 3
    cout << "Enter a string: " << endl;
    string s;
    cin >> s;
    
    cout << "Enter the character that you are looking for: " << endl;
    char key;
    cin >> key;
    
    cout << "Enter the position in the string that you want to start looking at: " << endl;
    int position;
    cin >> position;
    
    cout << "The key \"" << key << "\" appears in the string " << Num_Occurrences(s, key, position) << " times." << endl;
    // END Testing for Function # 3
    
    // START Testing for Function # 4
    cout << "Enter a positive integer: " << endl;
    int x;
    cin >> x;
    
    Whiny_Kid(x);
    // END Testing for Function # 4
    
    return 0;
}
