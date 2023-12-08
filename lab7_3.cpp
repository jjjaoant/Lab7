#include<iostream>
using namespace std;

char before(char i){
    if(i < 'A' || i > 'Z') return '0';
    if(i == 'A') return 'Z';
    return i - 1;
}
