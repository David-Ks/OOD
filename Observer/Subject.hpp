#pragma once

#include <vector>
#include <algorithm>
#include "Observer.hpp"

class Subject {
private:
    std::vector<Observer*> observers;

public:
    virtual ~Subject() {}

    void attach(Observer* observer) {
        observers.push_back(observer);
    }

    void detach(Observer* observer) {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

    void notify() const {
        for (Observer* observer : observers) {
            observer->update();
        }
    }
};
