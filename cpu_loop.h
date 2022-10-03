#include "registers.h"
#include "instructions.h"
#include "flags.h"

class CPU_Loop{

    public:

        //constructor
        CPU_Loop()=default;

        //destructor
        ~CPU_Loop()=default;

        int fetch(){
            registers.set_instruction_register(memory.get_ram(registers.get_program_counter()));
        }

        int decode(){

        }

        int execute(){

        }

        int clock_step(){
            int state {};

            state =+ fetch();
            state =+ decode();
            state =+ execute();
        }

    private:

        Memory memory;

        Registers registers;


};