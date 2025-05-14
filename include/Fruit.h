#if !defined(FRUIT)
#define FRUIT

#include "Item.h"

class Fruit : public Item {
private:
    std::string name_fruit;


public:
    void set_name_fruit(const std::string name_fruit);
    std::string get_name_fruit() const;
};

#endif // FRUIT
