#include "memory.h"

class Registers{

    public:

        //constructor
        Registers()=default;

        //destructor
        ~Registers()=default;

        //setter
        void set_accumulator (double value){
            accumulator = value;
        }

        void set_register_a (double value){
            register_a = value;
        }

        void set_register_b (double value){
            register_b = value;
        }

        void set_register_c (double value){
            register_c = value;
        }

        void set_register_d (double value){
            register_d = value;
        }

        //getter
        double get_accumulator (){
            return accumulator;
        }

        double get_register_a (){
            return register_a;
        }

        double get_register_b (){
            return register_b;
        }

        double get_register_c (){
            return register_c;
        }

        double get_register_d (){
            return register_d;
        }

    private:

        double accumulator {};

        double register_a {};

        double register_b {};

        double register_c {};

        double register_d {};

};