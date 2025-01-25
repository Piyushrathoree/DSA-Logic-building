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

    delete[] prepareOrders(10); // here we delete or clean the dynamic memory which is allocated in the prepareOrders() function 
    return 0;
}
// now there is one more thing to know about the pointers or dynamically allocated memory values  and this memory doesn't get cleaned up by cpp we have to do it manually
// which is whenever we allocate dynamic memory we have to deallocate the memory as well or do the cleanup 
// it can be done using delete keyword 