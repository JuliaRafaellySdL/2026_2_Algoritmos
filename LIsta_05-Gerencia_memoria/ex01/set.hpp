#ifndef __SET_IFRN__
#define __SET_IFRN__

class set{
    public:
    set(){}
    ~set(){}
    bool insert(int value){}

    bool erase(int value){}

    bool find(int value){
        for(unsigned int i=0; i<this->size();i++){
            if (data[i] == value){
                return i;
            }
        }
        return -1;
    }

    unsigned int size(){}

    bool empty(){}

    void clear(){}
};

#endif // __SET_IFRN__