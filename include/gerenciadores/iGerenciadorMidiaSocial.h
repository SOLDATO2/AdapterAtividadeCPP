//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_IGERENCIADORMIDIASOCIAL_H
#define ADAPTERATIVIDADECPP_IGERENCIADORMIDIASOCIAL_H


class iGerenciadorMidiaSocial {
public:

    virtual void exibirConteudo() = 0;
    virtual void enviarConteudo() = 0;
    virtual void exibirEstatisticas() = 0;


    virtual ~iGerenciadorMidiaSocial() = default;

};


#endif //ADAPTERATIVIDADECPP_IGERENCIADORMIDIASOCIAL_H