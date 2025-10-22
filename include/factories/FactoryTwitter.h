//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_FACTORYTWITTER_H
#define ADAPTERATIVIDADECPP_FACTORYTWITTER_H
#include "iFactoryStrategy.h"
#include "../gerenciadores/GerenciadorTwitter.h"
#include "../legados/Twitter.h"
#include "../strategies/TwitterStrategy.h"


class FactoryTwitter : public iFactoryStrategy{
public:
    iStrategy* createStrategy() override{
        Twitter* twitter = new Twitter();
        GerenciadorTwitter* gerenciadorTwitter = new GerenciadorTwitter(twitter);
        return new TwitterStrategy(gerenciadorTwitter);
    }
};


#endif //ADAPTERATIVIDADECPP_FACTORYTWITTER_H