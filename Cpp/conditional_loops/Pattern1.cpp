#include<iostream>
using namespace std;
int main() {
    int n = 4;
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    int num = 1;
    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << num << "";
            num++;
        }
        cout << endl;
    }
    cout << endl;

    int ch = 'A';
    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << char(ch) << "";
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;


    for(int i = 0; i <= n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << i + 1;

        }
        cout << endl;
    }
    cout << endl;
    char ch2 = 'A';
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << char(ch2);
            ch2++;

        }
        cout << endl;
    }
    cout << endl;



    for(int i = 1; i <= n; i++) {
        char ch = 'a' + (i - 1); // Determine the character for the current row
        for(int j = 1; j <= i; j++) {
            cout << ch; // Print the character
        }
        cout << endl; // Move to the next line
    }

    cout << endl;


    for(int i = 1; i <= n; i++) {
        for(int j = i; j > 0; j--) {
            cout << j;
        }
        cout << endl;

    }
    cout<<endl;

    int num3=1;
    for(int i=0; i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num3;
            num3++;
        }        
        cout<<endl;
    }
    return 0;
}