#include <iostream>
#include <cstring>
#define NUM 10

class Ring{
private:
    int m_buf[NUM];//缓存区
    int count;//计数
    int *m_head;//生产
    int *m_tail;//消费

public:
    Ring();
    ~Ring();

    void m_read(int x);
    void m_write(int x);
    void m_travel(void);
};