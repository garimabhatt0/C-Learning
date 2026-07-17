#include <iostream>
using namespace std;

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
    double futureValue = investmentAmount;
    int months = years * 12;
    for (int i = 0; i < months; i++) {
        futureValue *= (1 + monthlyInterestRate);
    }
    return futureValue;
}

int main() {
    double amount = 1000.0;
    double monthlyRate = 0.05 / 12; // 5% annual rate converted to monthly
    int years = 2;
    cout << "Future value = " << futureInvestmentValue(amount, monthlyRate, years) << endl;
    return 0;
}