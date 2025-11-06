#include "snack.h"
#include <sstream>

//Constructor for snack
snack::snack(snackType type, int pn, std::string desc, double p, int q, bool isGlutenFree)
: product(pn, desc, p, q), type(type), isGlutenFree(isGlutenFree) { }

//Returns the snack type as a string
std::string snack::getSnackType() const {
    switch (type) {
        case CHIPS: return "Chips";
        case COOKIES: return "Cookies";
        case NUTS: return "Nuts";
        default: return "Unknown";
    }
}
//Returns whether the snack is GF
bool snack::getGlutenFree() const {
    return isGlutenFree;
}

//Sets the snack Type
void snack::setSnackType(snackType t) {
    type = t;
}

//Sets GF Status
void snack::setGlutenFree(bool gf) {
    isGlutenFree = gf;
}

//Returns a formatted string describing the snack
std::string snack::tostring() const {
    std::ostringstream oss;
    oss << "Snack Product #" << prodNum << ": " << description
        << " | Type: " << getSnackType()
        << " | Gluten-Free: " << (isGlutenFree ? "Yes" : "No")
        << " | Price: $ " << std::fixed << std::setprecision(2) << price
        << " | Quanity: " << quantity;
        return oss.str();
}