class CfgVehicles
{
    class Tank;
    class Tank_F: Tank
    {
        class Turrets
        {
            class MainTurret;
        };
    };
    class SPE_Tank_Base: Tank_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                stabilizedInAxes = 3;
            };a
        };
    };
};