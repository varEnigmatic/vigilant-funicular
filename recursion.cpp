#include <iostream>
using namespace std;

void functionForRecrusion(int i) {
    cout << "The number is: " << i << endl;
    i++;
    if(i<10) {
        functionForRecrusion(i);
    }

}

int main() {
    int i = 0;
    functionForRecrusion(i);

    return 0;
}











