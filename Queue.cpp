struct QueueNode
{
    QueueNode* prev; 
    QueueNode* next;
    char* data;
    /* data */
};


class Queue
{
private:
    static int m_size{0};
    QueueNode* m_head{nullptr};
    QueueNode* m_tail{nullptr};

public:
    Queue(QueueNode* node):m_head(node),m_tail(node){}
    QueueNode *getTail()
    {
        QueueNode* temp = m_tail;
        if(m_tail->prev)
        {
            m_size--;
            m_tail = m_tail->prev;
        }
        return temp;
    }
    bool insert_head(QueueNode* node)
    {
        if(m_head)
        {
            node->next = m_head;
            m_head->prev = node;
            m_head = node;
            m_size++;
            return true;
        }
        m_head = node;
        m_tail = node;
        m_size++;
        return true;
    }
    int get_size()
    {
        return m_size;
    }

};