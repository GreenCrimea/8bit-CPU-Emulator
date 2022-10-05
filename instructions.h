//LOAD, STR, ADD, SUB, JMP0, JMPL, JMPG, JMPU
#include "flags.h"

class Instructions {

    public:

        //LOAD INSTRUCTION:
        //takes 1 cycle; loads data from one place to another;
        //flags;    0 = mem_out,w_pc; 1 = mem_out,w_ir; 2 = mem_out,w_ra; 3 = mem_out,w_rb;
        //          4 = ram_out,w_pc; 5 = ram_out,w_ir; 6 = ram_out,w_ra; 7 = ram_out,w_rb;
        //          8 = r_pc,w_ir; 9 = r_pc,w_ra; 10 = r_pc,w_rb;
        //          11 = r_ir,w_pc; 12 = r_ir,w_ra; 13 = r_ir,w_rb;
        //          14 = r_ra,w_pc; 15 = r_ra,w_ir; 16 = r_ra,w_rb;
        //          17 = r_rb,w_pc; 18 = r_rb,w_ir; 19 = r_rb,w_ra;
        void instruct_load(Flags flags, Registers registers, unsigned long instruction_flags){

            if(registers.get_instruction_target() == 0){
                registers.set_instruction_counter(0);
                registers.set_instruction_target(1);
            }

            if(registers.get_instruction_target() == registers.get_instruction_counter()){
                registers.set_instruction_counter(0);
                registers.set_instruction_target(0);

            }else if(registers.get_instruction_counter() == 0){
                switch(instruction_flags){

                    case 0:
                        flags.mem_out();
                        flags.w_pc();
                        break;
                    case 1:
                        flags.mem_out();
                        flags.w_ir();
                        break;
                    case 2:
                        flags.mem_out();
                        flags.w_ra();
                        break;
                    case 3:
                        flags.mem_out();
                        flags.w_rb();
                        break;
                    case 4:
                        flags.ram_out();
                        flags.w_ir();
                        break;
                    case 5:
                        flags.ram_out();
                        flags.w_pc();
                        break;
                    case 6:
                        flags.ram_out();
                        flags.w_ra();
                        break;
                    case 7:
                        flags.ram_out();
                        flags.w_rb();
                        break;
                    case 8:
                        flags.r_pc();
                        flags.w_ir();
                        break;
                    case 9:
                        flags.r_pc();
                        flags.w_ra();
                        break;
                    case 10:
                        flags.r_pc();
                        flags.w_rb();
                        break;
                    case 11:
                        flags.r_ir();
                        flags.w_pc();
                        break;
                    case 12:
                        flags.r_ir();
                        flags.w_ra();
                        break;
                    case 13:
                        flags.r_ir();
                        flags.w_rb();
                        break;
                    case 14:
                        flags.r_ra();
                        flags.w_pc();
                        break;
                    case 15:
                        flags.r_ra();
                        flags.w_ir();
                        break;
                    case 16:
                        flags.r_ra();
                        flags.w_rb();
                        break;
                    case 17:
                        flags.r_rb();
                        flags.w_pc();
                        break;
                    case 18:
                        flags.r_rb();
                        flags.w_ir();
                        break;
                    case 19:
                        flags.r_rb();
                        flags.w_ra();
                }
                registers.set_instruction_counter(1);
            }
        }

        void instruct_str(Flags flags, Registers registers){

        }

        void instruct_add(Flags flags, Registers registers){

        }
        
        void instruct_sub(Flags flags, Registers registers){

        }

        void instruct_jmp0(Flags flags, Registers registers){

        }

        void instruct_jmpl(Flags flags, Registers registers){

        }

        void instruct_jumpg(Flags flags, Registers registers){

        }

        void instruct_jmpu(Flags flags, Registers registers){

        }

};