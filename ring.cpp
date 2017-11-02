#include "ring.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Ring::Ring()
{
    count = 0;
    for(int i = 0; i<NUM; i++)
    {
        m_buf[i] = 0;
    }
    *m_head = m_buf[0];
    *m_tail = m_buf[0];
}

Ring::~Ring()
{
    
}

void Ring::m_write(int x)
{
    while(*m_head++ == 0)
    {
        *m_head = 1;
        count++;
        if(m_head == &m_buf[NUM-1])
            *m_head = m_buf[0];
        if(count == x)
        {
            break;
        }
    }
}

void Ring::m_read(int x)
{
    while(*m_tail++)
    {
        *m_tail = 0;
        count++;
        if(count == x)
            break;
    }
}

void Ring::m_travel(void)
{
    for(int i = 0; i < NUM; i++)
    {
        cout<<m_buf[i]<<"\t";
    }
    cout<<endl;
}
