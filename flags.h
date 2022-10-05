//mem_in, ram_in, mem_out, ram_out, w_pc, w_ir, w_ra, w_rb, r_pc, r_ir, r_ra, r_rb
class Flags{

    public:

        void mem_in(){
            flag_array[0] = 1;
        }

        void mem_out(){
            flag_array[1] = 1;
        }

        void ram_in(){
            flag_array[2] = 1;
        }

        void ram_out(){
            flag_array[3] = 1;
        }

        void w_pc(){
            flag_array[4] = 1;
        }

        void w_ir(){
            flag_array[5] = 1;
        }

        void w_ra(){
            flag_array[6] = 1;
        }

        void w_rb(){
            flag_array[7] = 1;
        }

        void r_pc(){
            flag_array[8] = 1;
        }

        void r_ir(){
            flag_array[9] = 1;
        }

        void r_ra(){
            flag_array[10] = 1;
        }

        void r_rb(){
            flag_array[11] = 1;
        }

        void reset_flags(){
            for(size_t i = 0; i < FLAGS_AMOUNT; ++i){
                flag_array[i] = 0;
            }
        }

        bool return_flags(){
            return flag_array;
        }

    private:

        bool flag_array[FLAGS_AMOUNT] = {0};

};