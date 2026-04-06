#pragma once
#ifndef DRIB_H
#define DRIB_H

#include <string>
using namespace std;

namespace MathObjects {
    namespace Fractions {
        class Drib {
        private:
            int chyselnyk;   
            int znamenyk;    
            string* history; 
            int size;       
            int count;       

        public:
           
            Drib(int c = 0, int z = 1);
            ~Drib();

            
            void vvesty(int c, int z);

           
            void input();

           
            Drib add(const Drib& other);
            Drib sub(const Drib& other);
            Drib mul(const Drib& other);
            Drib div(const Drib& other);

         
            void print();

        private:
            void addHistory(const string& action);
        };
    }
}

#endif