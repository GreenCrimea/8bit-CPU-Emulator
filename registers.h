#include "memory.h"

class Registers{

    public:

        //constructor
        Registers()=default;

        //destructor
        ~Registers()=default;

        //setter
        void set_program_counter (unsigned long value){
            program_counter = value;
        }

        void set_instruction_register (unsigned long value){
            instruction_register = value;
        }

        void set_register_a (unsigned long value){
            register_a = value;
        }

        void set_register_b (unsigned long value){
            register_b = value;
        }

        void set_register_c (unsigned long value){
            register_c = value;
        }

        void set_register_d (unsigned long value){
            register_d = value;
        }

        //getter
        unsigned long get_program_counter (){
            return program_counter;
        }

        unsigned long get_instruction_register(){
            return instruction_register;
        }

        unsigned long get_register_a (){
            return register_a;
        }

        unsigned long get_register_b (){
            return register_b;
        }

        unsigned long get_register_c (){
            return register_c;
        }

        unsigned long get_register_d (){
            return register_d;
        }

    private:

        unsigned long program_counter {};

        unsigned long instruction_register {};

        unsigned long register_a {};

        unsigned long register_b {};

        unsigned long register_c {};

        unsigned long register_d {};

};