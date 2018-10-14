#ifndef BLOCK_HPP

#define BLOCK_HPP

#include "POINT.hpp"


class BLOCK
{

public:

    /*BLOCK��ʼ��ʱ����һ����ά���飬
    nmode��ģ̬��Ŀ��
    size_a�����鳤��*/
     BLOCK(int _nmode, int _size_a);
    ~BLOCK();

    void readData ();
    void writeData();
    void DisData(int);

private:

    POINT *xx;
    POINT **xs;

    int nmode;
    int size_a;


};
#endif // BLOCK_HPP
