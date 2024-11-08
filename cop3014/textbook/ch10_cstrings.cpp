#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    // char st1[50], st2[50] = "Is";
    // cin.getline(st1, 10);
    // strcat(st1, st2);
    // cout << st1;

    // char str1[100], str2[100];
    // int x;
    // cin.getline(str1,100,'s');
    // cin >> x;
    // cin.getline(str2,100,'\n');
    // cout << str2;

    cout << "Hello, World!" << endl;
    char st[100] = {'p','r','o','g','r','a','m'};
    for (int i = 0; i < 100; i++) {
        cout << st[i];
    }
    cout << endl;
    return 0;

}
