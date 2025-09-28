//tower of hanoi problem usingn recursion
#include <iostream>

using namespace std;

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move the smallest disk from rod " << source << " to rod " << destination << endl;
        return;
    }
    
    towerOfHanoi(n - 1, source, auxiliary, destination);
    cout << "Move disk " << n << " from rod " << source << " to rod " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    cout << "--- Tower of Hanoi Solver ---" << endl;
    cout << "Let's call our three rods A, B, and C." << endl;
    
    int numDisks;
    cout << "How many disks are we solving for today? ";
    cin >> numDisks;
    
    cout << "\nGreat! Here are the steps to solve the puzzle for " << numDisks << " disks:" << endl;
    
    towerOfHanoi(numDisks, 'A', 'C', 'B'); 
    
    cout << "\nAnd that's it! Puzzle solved." << endl;
    
    return 0;
}