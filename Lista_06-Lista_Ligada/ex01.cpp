#include <iostream>
int main(){
    ll_int lista;
    int i = 2;
    lista.push_back(1);
    lista.push_back(2);
    lista.push_back(3);
    lista.push_back(4);

    std::cout<<lista.get_at(i)<<std::endl;
}


class ll_int{
    private:
        struct ll_int_node {
            int value;
            struct ll_int_node *next;
        };
        ll_int_node *first, *last;

    public:
        ll_int(){
            this->first = nullptr;
            this->last = nullptr;
        }
        void push_front(int value) {
            ll_int(){
                this->first = nullptr;
                this->last = nullptr;
        }
        }
        void push_front(int value) {
            ll_int_node *new_node = new ll_int_node;
            new_node->value=value;
            new_node->next=this->first;
            if (this->first == nullptr)
                this->last=new_node;
            this->this=new_node;
        }
        void push_back(int value){
            ll_int_node *new_node = new ll_int_node;
            new_node->value=value;
            new_node->next=nullptr;
            if (this->first == nullptr)
                this->first=new_node;
            else
                this->last->next=new_node;
            this->last=new_node;
        }
        void pop_front(){
            if (this->first==0)
                return;
            ll_int_node *to_remove=this->first;
            if(this->last==this->first)
                this->last=0;
            this->first=this->first->next;
            delete to_remove;
        }
        void pop_back(){
            if (this->last==nullptr)
                return;
            if (this->first==this->last){
                delete this->first;
                this->first=nullptr;
                this->last=nullptr;
            }
            ll_int_node *current = this->first;
            while (current->next != this-> last)
                current = current->next;
            current->next=nullptr;
            delete this->last;
            this->last=current;
        }
        int front(){
            if(this->first != nullptr)
                return this->first->value;
            else
                return -1;
        }
        int back(){
            if (this->last != nullptr)
                return this->last->value;
            else
                return -1;
        }
        int sum(){
            int ans=0;
            ll_int_node *current = this->first;
            while (current != 0){
                ans += current->value;
                current=current->next;
            }
            return ans;
        }

        //big O(n)
        int size(){
            int num=0;
            ll_int_node *current = this->first;
            while (current != 0){
                num +=1;
                current=current->next;
            }
            return num;
        }
        
        int get_at(int i){
            int indice=0;
            ll_int_node *current = this->first;
            while (current != 0 && indice <= i){
                indice +=1;
                current=current->next;
            }
            return current->value;
        }
};