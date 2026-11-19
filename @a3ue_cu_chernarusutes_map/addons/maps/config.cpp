#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(MAIN_ADDON),"A3A_core","A3A_maps"};
        author = ECSTRING(main,Extender_Author);
        authors[] = {};
        authorUrl = ECSTRING(main,Extender_AuthorUrl);
        VERSION_CONFIG;
    };
};

class A3A {
    class mapInfo {
        #include "Antistasi_CU_ChernarusUtes.CU_ChernarusUtes\mapInfo.hpp"
        class CU_ChernarusUtes_Summer : CU_ChernarusUtes {};
        class CU_ChernarusUtes_Winter : CU_ChernarusUtes {
            climate = "arctic";
        };
    };
    class NavGrid {
        CU_ChernarusUtes = QPATHTO_F(Antistasi_CU_ChernarusUtes.CU_ChernarusUtes\navGrid);
        CU_ChernarusUtes_Summer = QPATHTO_F(Antistasi_CU_ChernarusUtes.CU_ChernarusUtes\navGrid);
        CU_ChernarusUtes_Winter = QPATHTO_F(Antistasi_CU_ChernarusUtes.CU_ChernarusUtes\navGrid);
    };
};

class CfgMissions {
    class MPMissions {
        class Antistasi_CU_ChernarusUtes {
            briefingName = CSTRING(MapName_Text);
            //directory = QPATHTO_C(Antistasi_CU_ChernarusUtes.CU_ChernarusUtes); // ! why tf doesn't this work?
            directory = "z\a3ue_cu\addons\maps\Antistasi_CU_ChernarusUtes.CU_ChernarusUtes";
        };
        class Antistasi_CU_ChernarusUtes_Summer {
            briefingName = CSTRING(MapName_Summer_Text);
            directory = "z\a3ue_cu\addons\maps\Antistasi_CU_ChernarusUtes_Summer.CU_ChernarusUtes_Summer";
        };
        class Antistasi_CU_ChernarusUtes_Winter {
            briefingName = CSTRING(MapName_Winter_Text);
            directory = "z\a3ue_cu\addons\maps\Antistasi_CU_ChernarusUtes_Winter.CU_ChernarusUtes_Winter";
        };
    };
};
