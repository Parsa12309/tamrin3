#if !defined(CURRENCY_SYSTEM)
#define CURRENCY_SYSTEM

#include <string>
#include <stdexcept>
class Currency {
private:
    std::string name_currency;

public:
    void set_name_currency(const std::string name_currency);
    std::string get_name_currency() const;
};


#endif // CURRENCY_SYSTEM
