// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#pragma once

#include <string>
/*hp1, üapöhp2ö % Äcountöiöma1,
    öhp2ö % Älawöhp3öö / önextöstepö % Ädacöiöml1ö % Älawö7ö % Ädacöiömb1ö %
        Ärandomöö % Äscrö9sö % Äsirö9sö % Äxctöhr1ö % Äaddöiömx1ö %
        Ädacöiömx1ö % Äswapö % Äaddöiömy1ö % Ädacöiömy1ö % Ärandomö % Äscrö9sö %
        Äsirö9sö % Äxctöhr2ö % Ädacöiömdyö % Ädioöiömdxö % Äsetupö.hpt,
    3ö % Älacöranö % Ädacöiömth
*/
namespace star_map
{
    enum class System {
        BetaHydri,
        Sol,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven
{
    class Vessel
    {
        private:
        std::string name_;
        int n_;

        public:
        int generation{1};
        star_map::System current_system;
 
        //Vessel (std::string name, int n)
        //{};
        Vessel (std::string name, int n, star_map::System a_star = star_map::System::Sol);

        Vessel replicate (std::string);
    };
} // namespace heaven

