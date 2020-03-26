/* Write a program to perform the following:
(a) String matching using brute force technique */

#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,temp;
    cout<<"Enter string"<<endl;
    char str[100];
    cin.getline(str, 100);
    char substr[20];
    cout<<"Enter substring"<<endl;
    cin.getline(substr, 20);
 
    for(i = 0;str[i] != '\0';i++) {
        j = 0;
        if (str[i] == substr[j]) {
            temp = i + 1;
            while (str[i] == substr[j]) {
                i++;
                j++;
            }
 
            if (substr[j] == '\0') {
                cout << "The substring is present in given string at position " << temp << "\n";
                exit(0);
            }
            else {
                i = temp;
                temp = 0;
            }
        }
    }
 
    if (temp == 0)
        cout << "The substring is not present in given string\n";
 
    return 0;
}
/* output
Enter string
computer
Enter substring
put
The substring is present in given string at position 4
*/
