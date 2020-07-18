#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int i,x,j;
    bool is15 = false;
    vector<int> my_vector; // 30 random integer number should be added
    // To append 30 rand int rand() or srand(time(NULL)) methods should be used
    // Both rand() and srand() will produce random numbers
    // But the difference between them is srand will produce random integers due to time
    // Because of the time is changing, random values which are produced by srand will change too
    
    //Insert random numbers
    srand(time(NULL));
    while(my_vector.size()!=30){
        x = rand()%100;
        cout << x << endl;
        if(1<x && x<100){
            my_vector.push_back(x);
        }
    }
    // Check for 15
    if(my_vector.size()==30){
        for(j=0;j<30;j++){
            cout << my_vector[j]<<endl;
            if (my_vector[j]==15)
            {
                cout << "YES" << endl;
                is15 = true;
                break;
            }
        }
        // If YES is not returned from for loop, print NO
        if(is15==false) cout << "NO" << endl;
    }
    return 0;
}
