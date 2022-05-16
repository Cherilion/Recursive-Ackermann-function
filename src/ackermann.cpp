#include "include/ackermann.h"

bool defender(int m, int n){
    if(m < 0 || n < 0){
        return false;
    }
    else{
        return true;
    }
}

int ackermannRecursion(int m, int n){
    if(m == 0 && n != 0){
        return n + 1;
    }
    else if(m != 0 && n == 0){
        return ackermannRecursion(m - 1, 1);
    }
    else{
        return ackermannRecursion(m - 1, ackermannRecursion(m, n - 1));
    }

}

int ackermannEntailment(int m, int n){
    int value[n];
    size_t size = 0;

    for (;;) {
        if (m == 0) {
            n++;
            if (size-- == 0) {
                break;
            }
            m = value[size];
            continue;
        }

        if (n == 0) {
            m--;
            n = 1;
            continue;
        }

        size_t index = size++;
        value[index] = m - 1;
        n--;
    }

    return n;
}

