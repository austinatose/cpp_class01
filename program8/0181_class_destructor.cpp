#include <bits/stdc++.h>
using namespace std;


class MyBuffer
{
private:
    int* myNum;

public:

    MyBuffer(unsigned int length)
    {
        cout << "Constructor - allocating for " << length << " integers" << endl;
        myNum = new int[length]; // dynamic allocate memory
        memset(myNum, 0, sizeof(int) * length);
    }

    ~MyBuffer()
    {
        cout << "Destructor - releasing allocated memory" << endl;
        delete[] myNum; //free allocated memory
    }


};



int main() {

    cout << "How many integers would you like to store? " << endl;
x
    unsigned int numsToStore = 0;
    cin >> numsToStore;

    MyBuffer buf(numsToStore); // constructor invoked.


    return 0;
}


/*

1024 byte -> 1 kb memory
1024 kb   -> 1 mb memory
1024 mb   -> 1 gb memory => 1 * 10^10 bytes

-1 in int ->  4 * 10^10 int -> 16 * 10^10 bytes -> 16 gb memory




IMPORTANCE!!! --------------------------------------------
destructor is automatically invoked when an object is destroyed.
destructor will be invoked in 2 cases, a.k.a., the object will be destroyed in 2 cases:
1) the method which object is in, is done; or to say, the method returns.
2) you call delete on the object.
----------------------------------------------------------
*/