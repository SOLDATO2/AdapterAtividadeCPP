//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_TWITTERSTRATEGY_H
#define ADAPTERATIVIDADECPP_TWITTERSTRATEGY_H
#include "../gerenciadores/GerenciadorTwitter.h"
#include "iStrategy.h"


class TwitterStrategy : public iStrategy{
    GerenciadorTwitter* gerenciadorTwitter_;

public:
    explicit TwitterStrategy(GerenciadorTwitter* gerenciadorTwitter)
        : gerenciadorTwitter_(gerenciadorTwitter) {}

    void apresentarConteudo() override {
        gerenciadorTwitter_->exibirConteudo();
    }
    void uploadConteudo() override {
        gerenciadorTwitter_->enviarConteudo();
    }
    void apresentarEstatisticas() override {
        gerenciadorTwitter_->exibirEstatisticas();
    }
};


#endif //ADAPTERATIVIDADECPP_TWITTERSTRATEGY_H