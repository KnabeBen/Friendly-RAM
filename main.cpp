/* 
 * File:   main.cpp
 * Author: ebank
 *
 * Created on 25. Mai 2016, 11:10
 */

#include <cstdlib>
#include <cstring>
#include <iostream>
#include "allocate.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i = 0;
    allocate ersterZerstoerer;
// Test Kommentar
    ersterZerstoerer.allcocate(2, 1000000); // eingabe in 1000
// 1== chrash   2== fast-chrash  bsp.: 1000000*1000 = 1G Durchläufe belegt 
    // ca 15GB RAM
    cout << "fertig";
    cin >> i;
    //scanf("%d", &i);
    return 0;
}

