#include <iostream>
#include <vector>

using namespace std;

// Recursive Function # 1
// Pre: "v" is a vector of integers. "pos" is a position inside v 
// Post: Returns the largest value in the range v[pos]...v[v.size()-1]
int Maximum(const vector<int>& v, int pos){
	if(pos == v.size()-1)
        return v[pos];
    else{
        int maximum = Maximum(v, pos + 1);
        if(maximum > v[pos])
            return maximum;
        else
            return v[pos];
    }
}

// Recursive Function # 2
// Pre: "n” is a positive integer in the range 0 to 30.
// Post: returns the value of 2^n
int Two_To_The(int n){
    if(n == 0)
        return 1;
    if (n == 1)
        return 2;
    else{
        int result = 2 * Two_To_The(n - 1);
        return result;
    }
}

// Recursive Function # 3
// Pre: ”s” is a string. "key" is a character. "pos" is a position in s.
// Post: returns the number of times "key" appears in s, starting at s[pos]
int Num_Occurrences(string s, char key, int pos){
    if(pos == s.size() - 1){
        if(s[pos] == key)
            return 1;
        else
            return 0;
    }
    else{
        int total = Num_Occurrences(s, key, pos + 1);
        if(s[pos] == key)
            total = total + 1;
        return total;
    }
}

// Recursive Function # 4
// Pre: "n" is a positive integer
// Post: Prints to the screen the word "Please" n times, then "Can I have some candy? "
void Whiny_Kid(int n){
    if(n == 0)
        cout << "Can I have some candy?";
    else{
        cout << "Please ";
        Whiny_Kid(n - 1);
    }
}

int main(){
    // START Testing for Recursive Function # 1
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
    // END Testing for Recursive Function # 1
    
    // START Testing for Recursive Function # 2 START
    cout << "Enter a positive integer in the range 0-30: " << endl;
    int n;
    cin >> n;
    
    cout << "The value of 2 raised to the power of " << n << " is " << Two_To_The(n) << endl;
    // END Testing for Recursive Function # 2
    
    // START Testing for Recursive Function # 3
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
    // END Testing for Recursive Function # 3
    
    // START Testing for Recursive Function # 4
    cout << "Enter a positive integer: " << endl;
    int x;
    cin >> x;
    
    Whiny_Kid(x);
    // END Testing for Recursive Function # 4
    
    return 0;
}

