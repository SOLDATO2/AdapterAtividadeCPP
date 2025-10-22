//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_FACTORYINSTAGRAM_H
#define ADAPTERATIVIDADECPP_FACTORYINSTAGRAM_H

#include "iFactoryStrategy.h"
#include "../strategies/iStrategy.h"
#include "../legados/Instagram.h"
#include "../gerenciadores/GerenciadorInstagram.h"
#include "../strategies/InstagramStrategy.h"

class FactoryInstagram : public iFactoryStrategy {
public:
    iStrategy* createStrategy() override{
        Instagram* instagram = new Instagram();
        GerenciadorInstagram* gerenciadorInstagram = new GerenciadorInstagram(instagram);
        return new InstagramStrategy(gerenciadorInstagram);
    }
};


#endif //ADAPTERATIVIDADECPP_FACTORYINSTAGRAM_H