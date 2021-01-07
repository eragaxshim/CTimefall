//
// Created by tip on 07/01/2021.
//

#ifndef CTIMEFALL_ISTATE_H
#define CTIMEFALL_ISTATE_H

namespace ctf {
    class IState {
    public:
        IState();

        virtual void reInit();

        virtual void tick() = 0;

        virtual void render() = 0;

    };
}

#endif //CTIMEFALL_ISTATE_H
