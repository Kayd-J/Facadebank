#include <iostream>
#include "facadebank/accountManager.h"
#include "facadebank/bank.h"

using namespace std;
int main() {
    cout << "Welcome to Facade Bank" << endl;
    bank bank;
    bank.initAtm();
    return 0;
}
