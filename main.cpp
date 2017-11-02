#include "ring.h"
#include <iostream>
using namespace std;

int main(void)
{
    Ring lring;
    lring.m_write(2);
    lring.m_travel();
    lring.m_read(2);

    lring.m_write(8);
    lring.m_read(5);
    lring.m_travel();
}
