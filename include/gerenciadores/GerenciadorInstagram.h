//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_GERENCIADORINSTAGRAM_H
#define ADAPTERATIVIDADECPP_GERENCIADORINSTAGRAM_H
#include "iGerenciadorMidiaSocial.h"
#include "../legados/Instagram.h"


class GerenciadorInstagram : public iGerenciadorMidiaSocial{
private:
    Instagram *instagram_;

public:
    explicit GerenciadorInstagram(Instagram *instagram) : instagram_(instagram) {}

    void exibirConteudo() override {
        instagram_->mostrarConteudo();
    }

    void enviarConteudo() override {
        instagram_->publicarConteudo();
    }

    void exibirEstatisticas() override {
        instagram_->mostrarEstatisticas();
    }
};


#endif //ADAPTERATIVIDADECPP_GERENCIADORINSTAGRAM_H