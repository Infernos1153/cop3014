#include <iostream>

int main() {
// nested loops -- hand calc
    // int n =5, s = 0, x = 25;
    // while (n < 20) {
    //     s = s + x;
    //     for (int i = 0; i < 10; i += 4) {
    //         if (x%5 == 0) {
    //             x++;
    //         }
    //         x += 2;
    //     }
    // }

// pattern printing problems
// youll need to understand what the console is
// your console is a grid. 80 units wide and 25 units tall
    // inclass question
        // explaination: write out the pattern and see how it relates to your variables or print structure
            // row 0 has size # of stars
            // row 1 has size - 1
    // int a = 7;
    // while (a != 0){
    //     for (int i = a; i > 0; i--) {
    //         std::cout<<"*";
    //     }
    //     std::cout<<std::endl;
    //     a--;
    // }

    int size;
    std::cout<<"Enter size of shape: ";
    std::cin>>size;

    // for(int r=0; r < size; r++) {
    //     if(r==size-1 || r==0) {
    //         for(int c=0; c<size; c++){
    //             std::cout<<"*";
    //         }
    //     }
    //     else std::cout<<"*";
    //     std::cout<<std::endl;
    // }

    // inclass problem 3:
    // for (int r=0; r<size; r++) {
    //     for (int c=0; c<size-r; c++) {
    //         std::cout<<"*";
    //     }
    //     std::cout<<std::endl;
    // }

    // problem 4
    // for (int r=0; r<size; r++) {
    //     if (r==0) {
    //         for (int c=0; c<size-r; c++) {
    //         std::cout<<"*";
    //         }
    //     }
    //     else {
    //         for (int c=0; c<size-1; c++) {
    //             std::cout<<" ";
    //         }
    //         std::cout<<"*";
    //     }
    //     std::cout<<std::endl;   
    // }
    
    // problem 5
    // std::cout<<"\nPrinting H\n";
    // for (int r =0; r < size; r++) {
    //     if(r==size/2) {
    //         for (int c = 0; c < size; c++){
    //             std::cout<<"*";
    //         }
    //     }
    //     else {
    //         std::cout<<"*";
    //         for (int c = 0; c<size-2; c++){
    //             std::cout<<" ";
    //         }
    //         std::cout<<"*";
    //     }
    // std::cout<<std::endl;
    // }

    // printing diagonals

    using namespace std;
    cout << "\nPrinting N:\n";
    for (int r = 0; r < size; r++){
        if (r==0 || r == size-1){
            cout << "*";
            for(int c = 0; c<size - 2; c++){
                cout << " ";
            }
            cout << "*";
        }
        else {
            cout << "*";
            for(int c = 0; c<size - 2; c++){
                cout << " ";
            }
            cout << "*";
        }
    }

}