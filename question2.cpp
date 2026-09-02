#include <bits/stdc++.h>

using namespace std;

int arr[6];
int top1 = -1;
int top2 = 6;
// int MAX_SIZE = 6;

bool isempty1() {
    return top1 == -1;
}

bool isempty2() {
    return top2 == 6;
}

bool isfull() {
    return top1 + 1 == top2;
}

void push1(int value) {
    if (isfull()) {
        cout << "error\n";
        return;
    } else {
        top1++;
        arr[top1] = value;
    }
}

void push2(int value) {
    if (isfull()) {
        cout << "error";
        return;
    } else {
        top2--;
        arr[top2] = value;
    }
}

int pop1() {
    if (isempty1()) {
        cout << "error";
        return -1;
    } else {
        int temp = arr[top1];
        top1--;
        return temp;
    }
}

int pop2() {
    if (isempty2()) {
        cout << "error";
        return -1;
    } else {
        int temp = arr[top2];
        top2++;
        return temp;
    }
}

int main() {

    push1(5);
    push2(7);
    cout << pop1() << endl;
    cout << pop2() << endl;
    return 0;
}