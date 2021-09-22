#include <iostream>
#include "Bitset.h"

int main()
{
    DieStorage d1;  // Takes 12501 bytes for storage of 33336 with char it takes 33336 bytes DieStorage is takes 62.5% about less space
    for (int i = 0; i < d1.getSize(); i++) {
        d1.setDieResult(i, i % 6 + 1);
    } 
    
    for (int i = 0; i < d1.getSize(); i++) {
        std::cout << d1.getDieResult(i) << "\n";
    }
    
}
