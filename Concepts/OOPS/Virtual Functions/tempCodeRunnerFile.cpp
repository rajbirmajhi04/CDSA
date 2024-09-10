class Base {
    public:
        virtual void print(){
            cout << "Print base class" << endl;
        }
        void show(){
            cout << "Show base class" << endl;
        }
};

class Derived: public base {
    public:
        void print() {
            cout << "Print derived class" << endl;
        }
        void show() {
            cout << "Show derived class" << endl;
        }
};