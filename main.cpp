#include <iostream>
using namespace std;
#include "src/hello.hpp"
class Puppy: public Cutie {
  public:
  Puppy(): Cutie("A puppy", 10) {}
  string get_description() {
    return "A Puppy";
  }
  int get_cuteness_rating() override {
    return 10;
  }

};

class Kitty: public Cutie {
public:
  Kitty(): Cutie("A kitten", 9) {}
  string get_description() override{
    return "A Kitten";
  }
  int get_cuteness_rating() override {
    return 9;
  }

};
class PygmyMarmoset: public Cutie {
public:
  PygmyMarmoset(): Cutie("A small monkey", 10) {}
    string get_description() override {
      return "A small monkey";
    }
    int get_cuteness_rating() override {
      return 10;
    }
  };
int main() {
  Puppy puppy;
  Kitty kitty;
  PygmyMarmoset marmoset;

  QueueTees queue;

  cout <<"Size of queue:"<< queue.size()<<endl;

  queue.enqueue(puppy);
  queue.enqueue(kitty);
  queue.enqueue(marmoset);

  cout << "Size of queue:" <<queue.size()<<endl;

  queue.dequeue();

  queue.dequeue();

  queue.dequeue();
}
