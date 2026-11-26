#ifndef SET_IFRN_HPP
#define SET_IFRN_HPP

// Conjunto de inteiros distintos mantido em um array dinamico.
class set {
private:
    int* data;
    unsigned int count;
    unsigned int capacity;

    void resize(unsigned int newCapacity) {
        int* newData = newCapacity == 0 ? nullptr : new int[newCapacity];
        for (unsigned int i = 0; i < count; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    set() : data(nullptr), count(0), capacity(0) {}

    ~set() { delete[] data; }

    // O(n) no pior caso por causa da busca; O(1) amortizado para realocacao.
    bool insert(int value) {
        if (find(value)) {
            return false;
        }
        if (count == capacity) {
            resize(capacity == 0 ? 4 : capacity * 2);
        }
        data[count++] = value;
        return true;
    }

    // O(n): busca linear e deslocamento dos elementos seguintes.
    bool erase(int value) {
        unsigned int index = 0;
        while (index < count && data[index] != value) {
            ++index;
        }
        if (index == count) {
            return false;
        }
        for (unsigned int i = index; i + 1 < count; ++i) {
            data[i] = data[i + 1];
        }
        --count;

        if (capacity > 4 && count <= capacity / 4) {
            resize(capacity / 2);
        }
        return true;
    }

    // O(n): busca linear.
    bool find(int value) const {
        for (unsigned int i = 0; i < count; ++i) {
            if (data[i] == value) {
                return true;
            }
        }
        return false;
    }

    // O(1).
    unsigned int size() const { return count; }

    // O(1).
    bool empty() const { return count == 0; }

    // O(1): libera a memoria e reinicia o conjunto.
    void clear() {
        delete[] data;
        data = nullptr;
        count = 0;
        capacity = 0;
    }
};

#endif // SET_IFRN_HPP
