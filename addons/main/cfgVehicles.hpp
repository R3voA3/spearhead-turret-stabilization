class CfgVehicles
{
    class Tank_F
    {
        Turrets
        {
            class MainTurret;
        };
    };
    class SPE_Tank_Base: Tank_F
    {
        class Turrets
        {
            class MainTurret: MainTurret
            {
                stabilizedInAxes = 3;
            };
        };
    };
};