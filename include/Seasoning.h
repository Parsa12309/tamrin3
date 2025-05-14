#if !defined(SEASONING)
#define SEASONING

#include "Item.h"

class Seasoning : public Item {
private:
    std::string name_seasoning;
public:
    void set_name_seasoning(const std::string name_seasoning);
    std::string get_name_seasoning() const;
};

#endif // SEASONING
