
class nln_base_picture
{
    access=0;
    type=0;
    idc=-1;
    style=48;
    colorBackground[]={0,0,0,0};
    colorText[]={1,1,1,1};
    font="TahomaB";
    sizeEx=0;
    lineSpacing=0;
    text="";
    fixedWidth=0;
    shadow=0;
    x=0;
    y=0;
    w=0.200000;
    h=0.150000;
};

class nln_base_button
{
    access=0;
    type=1;
    text="";
    colorText[]={1,1,1,1};
    colorDisabled[]={0,0,0,0};
    colorBackground[]={0,0,0,0};
    colorBackgroundDisabled[]={0,0,0,0};
    colorBackgroundActive[]={0,0,0,0};
    colorFocused[]={0,0,0,0};
    colorShadow[]={0,0,0,0};
    colorBorder[]={0,0,0,0};
    soundEnter[]=
    {
        "\A3\ui_f\data\sound\RscButton\soundEnter",
        0.090000,
        1
    };
    soundPush[]=
    {
        "\A3\ui_f\data\sound\RscButton\soundPush",
        0.090000,
        1
    };
    soundClick[]=
    {
        "\A3\ui_f\data\sound\RscButton\soundClick",
        0.090000,
        1
    };
    soundEscape[]=
    {
        "\A3\ui_f\data\sound\RscButton\soundEscape",
        0.090000,
        1
    };
    style=2;
    x=0;
    y=0;
    w=0.095589;
    h=0.039216;
    shadow=0;
    font="puristaMedium";
    sizeEx=0.039210;
    offsetX=0.003000;
    offsetY=0.003000;
    offsetPressedX=0.002000;
    offsetPressedY=0.002000;
    borderSize=0;
};

class nln_base_edit
{
    access=0;
    type=2;
    style=528;
    x=0;
    y=0;
    h=0.040000;
    w=0.200000;
    colorBackground[]={0,0,0,0};
    colorText[]={0,0,0,1};
    colorSelection[]={0,0,0,0.250000};
    colorDisabled[]={0,0,0,0};
    font="TahomaB";
    sizeEx="0.015 / (getResolution select 5)";
    autocomplete="";
    text="";
    size=0.200000;
    shadow=1;
};
