#pragma once

class Counter {
private:
    int _min;
    int _max;
    int _currentValue;

public:
    Counter(int min, int max) {
        _min = min;
        _max = max;
        _currentValue = min;
    }

    void increment() {
        if (_currentValue + 1 == _max) {
            _currentValue = _min;
        }
        else {
            _currentValue++;
        }
    }

    void decrement() {
        if (_currentValue == _min) {
            _currentValue = _max - 1;
        }
        else {
            _currentValue--;
        }
    }

    int getCurrent() {
        return _currentValue;
    }
};
