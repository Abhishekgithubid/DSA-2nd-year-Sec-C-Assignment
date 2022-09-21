#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    //declare string
    string a,b,c;
    cin >> a >> b; 
    //In the first line print two space-separated integers, representing the length of  and  respectively.
    cout << a.size() << " " <<b.size() << endl;
    //in the second line print the string produced by concatenating  a and b.
    cout << a+b << endl;
    //In the third line print two strings separated by a space,  c and d  and  are the same as a and b, respectively, except that their first characters are swapped.
    c=a[0];
    a[0]=b[0];
    b[0]= c[0];
    cout << a << " " << b;
    
    return 0;
}
