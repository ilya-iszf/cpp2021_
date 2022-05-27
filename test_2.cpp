#include <iostream>
using namespace std;

class CreditCard {
    public:
    int Namber;
    float Balance;
    
    CreditCard(int a, int b){
    int Namber = a;
    int Balance = b;
    };
};
    
    void Transfer (CreditCard C1, CreditCard C2, int v){
        if (C1.Balance < v){
            cout << "Недостаточно средств" << "\n";
        }
        else 
        if (C1.Namber == C2.Namber)  {
           cout << "Ошибка! Номера карт совпадают." << "\n";
        } 
        else {
            int n1 = C1.Balance - v;
            int n2 = C2.Balance + v;
            cout << "Перевод прошел успешно!" << n1 << "; " << n2 << "\n";
        }
    };


int main()
{ 
    CreditCard Alpha(2345, 180);
    CreditCard Bravo(1234, 50);
    CreditCard Gamma(1234, 15);

    Transfer(Bravo, Alpha, 60); // Недостаточный баланс!
    Transfer(Bravo, Gamma, 10); // Ошибка! Номера карт совпадают
    Transfer(Bravo, Alpha, 30); // Успешно. Остатки на картах: (1) 20, (2) 210

return 0;
}
