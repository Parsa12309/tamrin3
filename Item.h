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

class Fruit : public Item {
private:
    std::string name_fruit;


public:
    void set_name_fruit(const std::string name_fruit) {
        this->name_fruit = name_fruit;
    }
    std::string get_name_fruit() const {
        return name_fruit;
    }

};

class Seasoning : public Item {
private:
    std::string name_seasoning;
public:
    void set_name_seasoning(const std::string name_seasoning) {
        this->name_seasoning = name_seasoning;
    }
    std::string get_name_seasoning() const {
        return name_seasoning;
    }

};

class Snack : public Item {
private:
    std::string name_snack;

public:
    void set_name_snack(const std::string name_snack) {
        this->name_snack = name_snack;
    }
    std::string get_name_snack() const {
        return name_snack;
    }
    
};

#endif // ITEM
