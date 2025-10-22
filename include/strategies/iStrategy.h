//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_ISTRATEGY_H
#define ADAPTERATIVIDADECPP_ISTRATEGY_H


class iStrategy {
public:
    virtual ~iStrategy() = default;
    virtual void apresentarConteudo() = 0;
    virtual void uploadConteudo() = 0;
    virtual void apresentarEstatisticas() = 0;

};


#endif //ADAPTERATIVIDADECPP_ISTRATEGY_H