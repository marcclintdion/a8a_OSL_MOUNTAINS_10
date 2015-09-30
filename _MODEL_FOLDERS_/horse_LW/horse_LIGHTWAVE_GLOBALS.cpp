
                                    //--------------------------------------                                                                                                  
                                var       horse_LIGHTWAVE_LIGHT_POSITION_01[]        = { 2, 15, 30, 1};//_TEXTURE_MAP_ON_SPECULAR
                                var       horse_LIGHTWAVE_ATTENUATION      =  1.2;
                                var       horse_LIGHTWAVE_SHININESS         =  113.33;  
  
                                //var     horse_LIGHTWAVE_LIGHT_POSITION_01[]        = {2, 15, 30, 1};//_NO_TEXTURE_MAP_ON_SPECULAR
                                //var     horse_LIGHTWAVE_ATTENUATION                =  0.84;
                                //var     horse_LIGHTWAVE_SHININESS                  =  96.1599;





GLuint      horse_LIGHTWAVE_SHADER_VERTEX;                                                                                                      
GLuint      horse_LIGHTWAVE_SHADER_FRAGMENT;                                                                                                    
GLuint      horse_LIGHTWAVE_SHADER;                                                                                                             
//--------------------------------------                                                                                                  
GLuint      UNIFORM_MODELVIEWPROJ_horse_LIGHTWAVE;                                                                                              
GLuint      UNIFORM_LIGHT_MATRIX_horse_LIGHTWAVE;                                                                                               
//--------------------------------------                                                                                                  
GLuint      UNIFORM_LIGHT_POSITION_01_horse_LIGHTWAVE;                                                                                          
GLuint      UNIFORM_SHININESS_horse_LIGHTWAVE;                                                                                                  
GLuint      UNIFORM_ATTENUATION_horse_LIGHTWAVE;                                                                                                  
GLuint      UNIFORM_TEXTURE_DOT3_horse_LIGHTWAVE;                                                                                               
GLuint      UNIFORM_TEXTURE_horse_LIGHTWAVE;                                                                                                    

                                                                              
//-----------------------------------------------------------------                                                                       
//-----------------------------------------------------------------                                                                       
GLuint      horse_LIGHTWAVE_NORMALMAP;                                                                                                          
GLuint      horse_LIGHTWAVE_TEXTUREMAP;  
                              
                              
                              
                              
                                #include "torso/torso_Globals.cpp"     
                                //====================================================================================                                          
                                #include "tail/tail_Globals.cpp"                                                                
                                //====================================================================================                                          
                                #include "neck/neck_Globals.cpp"                                                                
                                //====================================================================================                                          
                                #include "head/head_Globals.cpp"                                                                
                                //====================================================================================
                                #include "frontRightUpperLeg/frontRightUpperLeg_Globals.cpp"                                                                
                                //====================================================================================                                          
                                #include "frontRightLowerLeg/frontRightLowerLeg_Globals.cpp"                                                                
                                //====================================================================================                                          
                                #include "frontRightFoot/frontRightFoot_Globals.cpp"                                                                
                                //====================================================================================                                          
                                #include "backRightUpperLeg/backRightUpperLeg_Globals.cpp"                                                                
                                //====================================================================================                                          
                                #include "backRightLowerLeg/backRightLowerLeg_Globals.cpp"                                                                
                                //====================================================================================                                          
                                #include "backRightFoot/backRightFoot_Globals.cpp"                                                                
                                //====================================================================================   
                                #include "frontLeftUpperLeg/frontLeftUpperLeg_Globals.cpp"                                                                
                                //====================================================================================                                          
                                #include "frontLeftLowerLeg/frontLeftLowerLeg_Globals.cpp"                                                                
                                //====================================================================================                                          
                                #include "frontLeftFoot/frontLeftFoot_Globals.cpp"                                                                
                                //====================================================================================                                          
                                #include "backLeftUpperLeg/backLeftUpperLeg_Globals.cpp"                                                                
                                //====================================================================================                                          
                                #include "backLeftLowerLeg/backLeftLowerLeg_Globals.cpp"                                                                
                                //====================================================================================                                          
                                #include "backLeftFoot/backLeftFoot_Globals.cpp"                                                                
                                //====================================================================================  
