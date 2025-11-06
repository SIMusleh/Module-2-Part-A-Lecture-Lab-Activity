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
        
        std::string getSnackType() const; 
        bool getGlutenFree() const;

        void setSnackType (snackType t);
        void setGlutenFree(bool gf);

        std::string tostring() const override;
};

#endif