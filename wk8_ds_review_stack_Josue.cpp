/*

*/

#include "queue1.h"
#include<iostream> // cout, endl

using namespace main_savitch_8B;
using std::endl;
using std::cout;

int main(){
    queue<int> q1;

    q1.push(5);
    q1.push(3);
    q1.push(2);
    q1.push(4);
    q1.push(6);

    q1.pop();
    q1.pop();

    q1.push(1);
    q1.push(7);
    q1.push(8);
    q1.push(9);

    q1.pop();
    q1.pop();
    q1.pop();

    q1.push(2);
    q1.push(1);

    q1.print();

    return 0;
}
