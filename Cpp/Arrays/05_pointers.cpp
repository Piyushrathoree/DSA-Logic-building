#include <iostream>
using namespace std;

int* prepareOrders(int cups){
    int* orders = new int[cups];
    for(int i = 0; i < cups; i++){
        orders[i] = (i+1)*10;
    }
    return orders;
}
// here the above function is of pointer data type and also returning pointer which is initialized in the starting 
// pointer is datatype which is simply storing the first element of the array and then the array is stored in the heap memory
// the new keyword is used to initialize heap memory or dynamic memory
int main(){
    cout<< "the value of the prepareOrders() function is :";
    for (int i = 0; i < 10; i++){
        cout<< prepareOrders(10)[i] << " ";
    }
    cout<<endl;
    return 0;
}