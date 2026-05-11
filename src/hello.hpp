#include <string>
#include "cutie.hpp"
using namespace std;

class QueueTees {
    private:
    Cutie** data;
    int max_size;
    int current_size;
    int front;
    int rear;

    public:
    QueueTees(int max_size = 5);
    ~QueueTees();
    void enqueue(Cutie& cutie);
    Cutie* dequeue();
    int size() const;
    bool empty() const;
    bool full() const;
};