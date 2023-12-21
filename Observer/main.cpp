#include "Subject.hpp"
#include "ConcreteObserver.hpp"

int main() {
    Subject subject;

    ConcreteObserver* observer1 = new ConcreteObserver();
    ConcreteObserver* observer2 = new ConcreteObserver();

    subject.attach(observer1);
    subject.attach(observer2);

    subject.notify();

    subject.detach(observer1);

    subject.notify();

    delete observer1;
    delete observer2;

    return 0;
}
