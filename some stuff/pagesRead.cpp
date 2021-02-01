#include <iostream>

using namespace std;

int main() {
    int arr[125];
    int i=0;
    int pagesRead;
    int count;

    do {
        // Take input of (int)pagesRead.
        cin>> pagesRead;
        if(pagesRead >= 0){
            arr[i] = pagesRead;
            count += pagesRead;
            i++;
        }
    }while (i<125 && pagesRead !=0 && !(count >=125));

    // If user enters 0 or the daily target 125 pages is met STOP taking input.
    // If 0 entered print the amount of remaining pages as in integer.
    // Else if target is reached print text "Target is reached in" + (int)inHowManySessions + "session(s)".
    if (count<125){
        cout << 125-count << endl;
    } else{
        cout << "Target is reached in " << i << " session(s)";
    }
    return 0;
}
