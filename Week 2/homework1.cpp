#include <iostream>
using namespace std;

char flag;
int candiesQty, biscuitsQty, chipsQty, softdrinksQty;

void clearCart(){
    candiesQty = 0;
    biscuitsQty = 0;
    chipsQty = 0;
    softdrinksQty = 0;
}

void showBills(){
    // Items price
    double candiesPr = 2500;
    double biscuitsPr = 3000;
    double chipsPr = 5000;
    double softdrinksPr = 7000;
    // Items disc
    float candiesDc = 0.05;
    float biscuitsDc = 0.1;
    float chipsDc = 0.07;
    float softdrinksDc = 0.08;

    double candiesTotalPr = 2500 * candiesQty * (1 - candiesDc);
    double biscuitsTotalPr = 3000 * biscuitsQty * (1 - biscuitsDc);
    double chipsTotalPr = 5000 * chipsQty * (1 - chipsDc);
    double softdrinksTotalPr = 7000 * softdrinksQty * (1 - softdrinksDc);

    double subTotal = candiesTotalPr + biscuitsTotalPr + chipsTotalPr + softdrinksTotalPr;

    cout << "\nTotal bills with discount: " << endl;
    cout << "Candies: " << candiesQty << " x " << candiesPr << " = " << "Rp " << candiesTotalPr << endl;
    cout << "Biscuits: " << biscuitsQty << " x " << biscuitsPr << " = " << "Rp " << biscuitsTotalPr << endl;
    cout << "Chips: " << chipsQty << " x " << chipsPr << " = " << "Rp " << chipsTotalPr << endl;
    cout << "Softdrinks: " << softdrinksQty << " x " << softdrinksPr << " = " << "Rp " << softdrinksTotalPr << endl;
    cout << "Subtotal: Rp " << subTotal << endl;  
    cout << "\n";
}

void itemType(){
    /* Current type of item
    1. Candies
    2. Biscuits
    3. Chips
    4. Softdrinks
    */
   // Getting item type
   do
   {
    int itemOpt;
    cout << "\nPlease select the items" << endl;
    cout << "1. Candies" << endl;
    cout << "2. Biscuits" << endl;
    cout << "3. Chips" << endl;
    cout << "4. Softdrink" << endl;
    cout << "5. Show Cart" << endl;
    cout << "6. Back to main menu" << endl;
    cout << "\n";
    cin >> itemOpt;

    switch (itemOpt)
    {
    case 1:
        cout << "Input how many candies: " << endl;
        cin >> candiesQty;
        cout << candiesQty << " candies added to cart\n" << endl;
        break;
    case 2:
        cout << "Input how many biscuits: " << endl;
        cin >> biscuitsQty;
        cout << biscuitsQty << " biscuits added to cart\n" << endl;
        break;
    case 3:
        cout << "Input how many chips: " << endl;
        cin >> chipsQty;
        cout << chipsQty << " chips added to cart\n" << endl;
        break;
    case 4:
        cout << "Input how many softdrinks: " << endl;
        cin >> softdrinksQty;
        cout << softdrinksQty << " softdrinks added to cart\n" << endl;
        break;
    case 5:
        cout << "Current items in cart: " << endl;
        cout << "Candies: " << candiesQty << endl;
        cout << "Biscuits: " << biscuitsQty << endl;
        cout << "Chips: " << chipsQty << endl;
        cout << "Softdrinks: " << softdrinksQty << endl;
        cout << "\n";
        break;
    case 6:
        flag = '6';
        break;
    default:
        cout << "Invalid option\n" << endl;
        break;
    }
   } while (flag != '6');
   
}


void menu(){
    int opt;

    do 
    {
        cout << "\nPlease select the menu" << endl;
        cout << "1. Add items" << endl;
        cout << "2. Show bills" << endl;
        cout << "3. Clear cart" << endl;
        cout << "4. Exit" << endl;
        cin >> opt;

        switch (opt)
        {
        case 1:
            itemType();
            break;
        case 2:
            showBills();
            break;
        case 3:
            clearCart();
            break;
        case 4:
            flag = '4';
            break;
        default:
            cout << "Invalid option" << endl;
            break;
        }
        
    } while(flag != '4');
}

int main(){
    menu();
    return 0;
}