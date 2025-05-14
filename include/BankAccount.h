#if !defined(BANK_ACCOUNT)
#define BANK_ACCOUNT
#include <string>
class BankAccount {
private:
    std::string name;
    unsigned int account_number;
    std::string currency_type;
    double balance;

public:
    void deposit(const double& amount);
    void withdraw(const double& amount);
    double get_balance() const;

};

#endif // BANK_ACCOUNT
