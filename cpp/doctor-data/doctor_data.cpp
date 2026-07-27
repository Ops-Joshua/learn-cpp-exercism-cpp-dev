// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

/*
hp4,ölacöiömthö%Äsmaö%Äsubö(311040ö%Äspaö%Äaddö(311040ö%Ädacöiömthö%Äcountö.hpt,hp4ö%Äxctöhd2ö%Ädacöiöma1
hp2,öjmpö.
*/
#include "doctor_data.h"

 
        //Vessel (std::string name, int n)
        //{};
        heaven::Vessel::Vessel (std::string name, int n, star_map::System a_star)
            : name_(std::move(name)), n_(n), current_system(a_star)
        {};

        heaven::Vessel heaven::Vessel::replicate (std::string name)
        {
            Vessel clone = *this;
            clone.name_ = name;
            clone.generation += 1;
            return clone;
            
        }
