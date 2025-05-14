#if !defined(ITEM)
#define ITEM
#include <string>
class Item
{
private:
    double price;
    std::string unit_of_measurement;
    int reminder;

public:
    Item(/* args */);

    void set_price(const double&);
    void set_unit_of_measurement(const std::string&);
    void set_reminder(const int&);

    double get_price() const;
    std::string get_unit_of_measurement() const;
    int get_reminder() const;

    ~Item();
};


#endif // ITEM
