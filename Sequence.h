#ifndef __SEQUENCE_H__
#define __SEQUENCE_H__

#include <iostream>


/**
 * @class Sequence
 * @brief Ta klasa pozwala pracować na sekwencjach
 */

class Sequence{
public:
    /**
     * @brief Tworzy nowy obiekt z danymi parametrami.
     * @param par1 parametr1
     * @param par2 parametr2
     */
    Sequence(int par1, int par2);
    /**
     * @brief Tworzy kopię obiektu z podanego obiektu.
     */
    Sequence(Sequence const & seq);
    /**
     * @brief Destruktor.
     */
    ~Sequence();

    //! \brief getter X
    int getX();

    //! \brief getter Y
    int getY();

    /**
    * \brief Mnożenie dwóch macierzy
    * 
    * Wzór na mnożenie dwóch macierzy \f$A\f$ i \f$B\f$ o wymiarach \f$m\times n\f$ i \f$n\times p\f$ jest następujący:
    * \f[C_{i,j} = \sum\limits_{k=0}^{n-1} A_{i,k} * B_{k,j}\f]
    * gdzie \f$C\f$ to wynikowe macierz o wymiarach \f$m\times p\f$.
    */
    float fun1();
    /**
    * \brief Amplituda drgań wymuszonych
    * 
    * Wzór na amplitudę drgań wymuszonych jednowymiarowej maszyny dynamicznej o masie \f$m\f$, sprężystości \f$k\f$ i tłumieniu \f$c\f$ jest następujący:
    * \f[A = \frac{F_0}{\sqrt{(k - m\omega^2)^2 + (c\omega)^2}}\f]
    * gdzie \f$\omega\f$ to częstotliwość drgań, a \f$F_0\f$ to siła wymuszająca.
    */
    float fun2();
private:
    int par1;
    int par2;
};

#endif