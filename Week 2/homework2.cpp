#include <iostream>
using namespace std;

double totalCost, totalRev, amountDecider, profit, loss;

void calc(){
    amountDecider = totalRev - totalCost;

    if (amountDecider > 0)  {
        profit = amountDecider;
        cout << "The profit is: $ " << profit;
    }else{
        amountDecider = totalCost - totalRev;
        loss = amountDecider;
        cout << "The loss is: $ " << loss;
    }
}

void input(){
    cout << "Enter total cost: " << endl;
    cin >> totalCost;
    cout << "Enter total revenue: " << endl;
    cin >> totalRev;
    calc();
}

int main(){
    input();
    return 0;
}