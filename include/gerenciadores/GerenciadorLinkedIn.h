//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_GERENCIADORLINKEDIN_H
#define ADAPTERATIVIDADECPP_GERENCIADORLINKEDIN_H
#include "iGerenciadorMidiaSocial.h"
#include "../legados/LinkedIn.h"


class GerenciadorLinkedIn : public iGerenciadorMidiaSocial {
private:
    LinkedIn *linkedin_;

public:
    explicit GerenciadorLinkedIn(LinkedIn *linkedin) : linkedin_(linkedin) {}

    void exibirConteudo() override {
        linkedin_->mostrarConteudo();
    }

    void enviarConteudo() override {
        linkedin_->publicarConteudo();
    }

    void exibirEstatisticas() override {
        linkedin_->mostrarEstatisticas();
    }
};


#endif //ADAPTERATIVIDADECPP_GERENCIADORLINKEDIN_H