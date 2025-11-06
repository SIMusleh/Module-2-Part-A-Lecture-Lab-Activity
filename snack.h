#ifndef SNACK_H
#define SNACK_H

#include "product.h"
#include <string>

class snack : public product
{
    //Enum to represent different snack types
    public:
        enum snackType { CHIPS, COOKIES, NUTS };

    private:
        snackType type;
        bool isGlutenFree;

    public:

        //constructor snack
        snack(snackType type, int pn, std::string desc, double p, int q, bool isGlutenFree);
        
        //Accessors
        std::string getSnackType() const; 
        bool getGlutenFree() const;
        
        //Mutators
        void setSnackType (snackType t);
        void setGlutenFree(bool gf);

        std::string tostring() const override;
};

#endif