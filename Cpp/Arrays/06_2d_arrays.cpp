#include <iostream>
using namespace std;
int main() {
    int array[5][5] = {
        {
            1, 2, 3, 4, 5
        }, {
            10, 20, 30, 40, 50
        },{
            100, 200, 300, 400, 500
        },{
            1000, 2000, 3000, 4000, 5000
        },{
            10000, 20000, 30000, 40000, 50000
        }
    };

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// the above code will print the 2d array which is 5*5 matrix and the output will be
// 1 2 3 4 5
// 10 20 30 40 50
// 100 200 300 400 500
// 1000 2000 3000 4000 5000
// 10000 20000 30000 40000 50000