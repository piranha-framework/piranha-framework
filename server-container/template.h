#pragma once

#define ENGINE_NONE 0x00
#define ENGINE_PIRANHA 0X01
#define ENGINE_JINJA 0x02 // python specific html template

#define ENABLE_DEBUG 0x1A // by default debug mode is disabled so developer have to enable mode to use the feature

/*
    This function is responsible for include template folder 
    @param dirname : name of the template directory
    @Return : return 0 if failed and 1 if succeed
*/
int template_dir(char* dirname);

/*
    This function is responsible for choosing the template engine for render backend data in frontend.
    @param engine_flag : option for engine -- piranha support two engine by defualt (piranha-engine and jinja template engine)
    @return : return  0 if failed and 1 if succeed
*/
int template_engine(int engine_flag);