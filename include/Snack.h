#if !defined(SNACK)
#define SNACK

#include "Item.h"

class Snack : public Item {
private:
    std::string name_snack;

public:
    void set_name_snack(const std::string name_snack);
    std::string get_name_snack() const;    
};


#endif // SNACK
