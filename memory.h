#include "constants.h"

class Memory{

    public:

        //constructor
        Memory()=default;

        //destructor
        ~Memory()=default;

        //setters
        void set_ram(unsigned long index, int value){
            ram_array[index] = value;
        }
        void set_storage(unsigned long index, int value){
            storage_array[index] = value;
        }

        //getters
        double get_ram(unsigned long index){
            return ram_array[index];
        }
        double get_storage(unsigned long index){
            return storage_array[index];
        }

    private:

        double ram_array[RAM_SIZE]{};
        double storage_array[STORAGE_SIZE]{};

};
