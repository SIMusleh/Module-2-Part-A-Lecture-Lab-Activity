#include "snack.h"
#include <sstream>

snack::snack(snackType type, int pn, std::string desc, double p, int q, bool isGlutenFree)
: product(pn, desc, p, q), type(type), isGlutenFree(isGlutenFree) { }

std::string snack::getSnackType() const {
    switch (type) {
        case CHIPS: return "Chips";
        case COOKIES: return "Cookies";
        case NUTS: return "Nuts";
        default: return "Unknown";
    }
}

bool snack::getGlutenFree() const {
    return isGlutenFree;
}

void snack::setSnackType(snackType t) {
    type = t;
}

void snack::setGlutenFree(bool gf) {
    isGlutenFree = gf;
}

std::string snack::tostring() const {
    std::ostringstream oss;
    oss << "Snack Product #" << prodNum << ": " << description
        << " | Type: " << getSnackType()
        << " | Gluten-Free: " << (isGlutenFree ? "Yes" : "No")
        << " | Price: $ " << std::fixed << std::setprecision(2) << price
        << " | Quanity: " << quantity;
        return oss.str();
}