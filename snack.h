#ifndef SNACK_H
#define SNACK_H

#include "product.h"
#include <string>

class snack : public product
{
    public:
        enum snackType { CHIPS, COOKIES, NUTS };

    private:
        snackType type;
        bool isGlutenFree;

    public:
        snack(snackType type, int pn, std::string desc, double p, int q, bool isGlutenFree);
}