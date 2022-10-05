#include "registers.h"
#include "instructions.h"

class CPU_Loop{

    public:

        //constructor
        CPU_Loop()=default;

        //destructor
        ~CPU_Loop()=default;

        int fetch(){
            
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

        Instructions instructions;

        Flags flags;


};