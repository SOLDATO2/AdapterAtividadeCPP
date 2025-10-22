//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_LINKEDINSTRATEGY_H
#define ADAPTERATIVIDADECPP_LINKEDINSTRATEGY_H
#include "../gerenciadores/GerenciadorLinkedIn.h"
#include "iStrategy.h"


class LinkedInStrategy : public iStrategy{
    GerenciadorLinkedIn* gerenciadorLinkedIn_;

public:
    explicit LinkedInStrategy(GerenciadorLinkedIn* gerenciadorTwitter)
        : gerenciadorLinkedIn_(gerenciadorTwitter) {}

    void apresentarConteudo() override {
        gerenciadorLinkedIn_->exibirConteudo();
    }
    void uploadConteudo() override {
        gerenciadorLinkedIn_->enviarConteudo();
    }
    void apresentarEstatisticas() override {
        gerenciadorLinkedIn_->exibirEstatisticas();
    }
};


#endif //ADAPTERATIVIDADECPP_LINKEDINSTRATEGY_H