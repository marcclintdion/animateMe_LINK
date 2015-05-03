#include <fstream.h>
using namespace std;


    skin_A1A_SHADER = glCreateProgram();                                                                                     
    //----------------------------------------------------                                                                  
    vertexSource_skin_A1A   = readShaderFile( "_SHADERS_/skinShaders/A1A/skin_A1A_1vert.cpp" );                                                                                  
    fragmentSource_skin_A1A = readShaderFile( "_SHADERS_/skinShaders/A1A/skin_A1A_1frag.cpp" );                                                                                

        
        //=======================================================================================================================                   
        skin_A1A_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);                                                          
        glShaderSource( skin_A1A_SHADER_VERTEX, 1, (const GLchar**)&vertexSource_skin_A1A, NULL );                                        
        glCompileShader( skin_A1A_SHADER_VERTEX);                                              //glShaderBinary                              
        //----------------------------------------------------                                                                  
        skin_A1A_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);                                                      
        glShaderSource( skin_A1A_SHADER_FRAGMENT, 1, (const GLchar**)&fragmentSource_skin_A1A, NULL );                                    
        glCompileShader(skin_A1A_SHADER_FRAGMENT);                                              //glShaderBinary                                                                             
        //--------------------------------------------------------------------------------------------------                    
        glAttachShader( skin_A1A_SHADER, skin_A1A_SHADER_VERTEX );                                                        
        glAttachShader( skin_A1A_SHADER, skin_A1A_SHADER_FRAGMENT );                                                      
        //--------------------------------------------------------------------------------------------------                    
        glBindAttribLocation(skin_A1A_SHADER,   0, "position");                                                              
        glBindAttribLocation(skin_A1A_SHADER,   1, "normal");                                                            
        glBindAttribLocation(skin_A1A_SHADER,   2, "uv0");                                                             
        //--------------------------------------------------------------------------------------------------                    
        glDeleteShader( skin_A1A_SHADER_VERTEX);                                                                             
        glDeleteShader( skin_A1A_SHADER_FRAGMENT);                                                                           
        glLinkProgram(skin_A1A_SHADER);                                                                                      
        //--------------------------------------------------------------------------------------------------                    
        UNIFORM_SHADOW_TEX_MATRIX_skin_A1A                         = glGetUniformLocation(skin_A1A_SHADER, "shadowTexMatrix");  
        UNIFORM_MODEL_ROTATIONinv_MATRIX_skin_A1A                  = glGetUniformLocation(skin_A1A_SHADER, "modelRotationINVmatrix"); 
        UNIFORM_PROJECTION_MATRIX_skin_A1A                         = glGetUniformLocation(skin_A1A_SHADER, "projectionMatrix");          
        UNIFORM_MODELVIEW_MATRIX_skin_A1A                          = glGetUniformLocation(skin_A1A_SHADER, "modelViewMatrix");                  
  
        //-------------------------------      
        UNIFORM_LIGHT0_POS_skin_A1A                                = glGetUniformLocation(skin_A1A_SHADER, "light0_POS");
        UNIFORM_LIGHT1_POS_skin_A1A                                = glGetUniformLocation(skin_A1A_SHADER, "light1_POS");
        UNIFORM_LIGHT2_POS_skin_A1A                                = glGetUniformLocation(skin_A1A_SHADER, "light2_POS");   
        //================================== 
        UNIFORM_shadowBias_skin_A1A                                = glGetUniformLocation(skin_A1A_SHADER, "shadowBias");  
        //================================== 
        UNIFORM_f_0_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_0"); 
        UNIFORM_f_1_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_1"); 
        UNIFORM_f_2_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_2"); 
        UNIFORM_f_3_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_3"); 
        UNIFORM_f_4_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_4"); 
        UNIFORM_f_5_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_5"); 
        UNIFORM_f_6_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_6"); 
        UNIFORM_f_7_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_7"); 
        UNIFORM_f_8_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_8"); 
        UNIFORM_f_9_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_9"); 


                                   
        //--------------------------------
        UNIFORM_TEX_DOT3_skin_A1A                                  = glGetUniformLocation(skin_A1A_SHADER, "NormalMAP");     
        UNIFORM_TEX_SHADOW_skin_A1A                                = glGetUniformLocation(skin_A1A_SHADER, "ShadowMAP");           
        UNIFORM_TEX_COLOR_skin_A1A                                 = glGetUniformLocation(skin_A1A_SHADER, "ColorMAP");  
        UNIFORM_TEX_MASK1_skin_A1A                                 = glGetUniformLocation(skin_A1A_SHADER, "M1_MAP");  

//######################################################
#include "settings.cpp"











