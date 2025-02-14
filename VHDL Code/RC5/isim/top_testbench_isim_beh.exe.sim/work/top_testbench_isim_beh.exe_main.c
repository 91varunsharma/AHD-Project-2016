/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_1242562249;
char *WORK_P_0278921292;
char *WORK_P_3661819017;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *IEEE_P_0774719531;
char *IEEE_P_3564397177;
char *STD_TEXTIO;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    std_textio_init();
    ieee_p_3564397177_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_p_3661819017_init();
    ieee_p_1242562249_init();
    work_p_0278921292_init();
    ieee_p_0774719531_init();
    work_a_1178958402_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_2096391741_3212880686_init();
    work_a_2522068999_3212880686_init();
    work_a_2640864474_3212880686_init();
    work_a_1461684583_3212880686_init();
    work_a_2938293394_3212880686_init();
    work_a_0152545148_2372691052_init();


    xsi_register_tops("work_a_0152545148_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    WORK_P_0278921292 = xsi_get_engine_memory("work_p_0278921292");
    WORK_P_3661819017 = xsi_get_engine_memory("work_p_3661819017");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");

    return xsi_run_simulation(argc, argv);

}
