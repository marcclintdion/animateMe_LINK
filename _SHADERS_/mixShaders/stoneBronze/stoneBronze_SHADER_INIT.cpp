    stoneBronze_SHADER = glCreateProgram();                                                                                     
        //----------------------------------------------------                                                                  
    const GLchar *vertexSource_stoneBronze =                                                                                    

    " #define highp                                                                                                                 \n" 
    
    //--------------------------------------------     
    "    attribute       vec4   position;                                                                                           \n" 
    "    attribute       vec3   normal;                                                                                             \n" 
    "    attribute       vec2   uv0;                                                                                                \n" 
    //--------------------------------------------   
    "    uniform         mat4   shadowTexMatrix;                                                                                    \n"           
    "    uniform         mat4   modelRotationINVmatrix;                                                                             \n"    
    "    uniform         mat4   projectionMatrix;                                                                                   \n"     
    "    uniform         mat4   modelViewMatrix;                                                                                    \n"     

    //--------------------------------------------                                        
    "    uniform  highp  vec4   light0_POS;                                                                                         \n" 
    "    uniform  highp  vec4   light1_POS;                                                                                         \n"     
    "    uniform  highp  vec4   light2_POS;                                                                                         \n"      
    "    uniform  highp  vec4   light3_POS;                                                                                         \n"          
    //--------------------------------------------
    "    varying  highp  vec4   shadow_uvPASS;                                                                                      \n"       
    //--------------------------------------------
    "    varying  highp  vec4   light0_posPASS;                                                                                     \n" 
    "    varying  highp  vec4   light1_posPASS;                                                                                     \n"     
    "    varying  highp  vec4   light2_posPASS;                                                                                     \n"     
    "    varying  highp  vec4   light3_posPASS;                                                                                     \n"     
    
    //======================================
    "    varying  highp  vec2   uv0_PASS;                                                                                           \n" 
    //======================================   
    "    varying    highp   vec4    Vertex;                                                                                         \n"                                                          
    "    varying    highp   vec4    inverseEye;                                                                                     \n"   
    "    varying    highp   vec3    invertView;                                                                                     \n" 

    //======================================    
    
    
    //===============================================================================================
    
    " void main()                                                                                                                   \n" 
    " {                                                                                                                             \n" 
    
    "     Vertex                  = modelViewMatrix * position;                                                                     \n"  
    "     inverseEye              = normalize(modelRotationINVmatrix * vec4(0.0, 0.0, -1.0, 0.0));                                  \n"          
    "     invertView              = normalize(Vertex.xyz * inverseEye.w - inverseEye.xyz * Vertex.w);                               \n"  
       
          //-------------------------------------------------------------------------------    
    "     shadow_uvPASS           =  shadowTexMatrix  * position;                                                                   \n" 
          //-------------------------------------------------------------------------------
    "     uv0_PASS                =  uv0;                                                                                           \n" 
          //===============================================================================
    "     light0_posPASS          =  modelRotationINVmatrix * light0_POS;                                                           \n" 
    "     light1_posPASS          =  modelRotationINVmatrix * light1_POS;                                                           \n"           
    "     light2_posPASS          =  modelRotationINVmatrix * light2_POS;                                                           \n"           
    "     light3_posPASS          =  modelRotationINVmatrix * light3_POS;                                                           \n"           
          
          //-------------------------------------------------------------------------------
    "     gl_Position             =  projectionMatrix * position;                                                                   \n" 
    
    " } \n";   
    
    //===================================================================================================================================                 

    const GLchar *fragmentSource_stoneBronze =                                                                                  

    "#ifdef GL_ES                                                                                                                   \n" 
    "#else                                                                                                                          \n" 
    "#define highp                                                                                                                  \n" 
    "#endif                                                                                                                         \n" 
    
    
    
    
    "    uniform  sampler2D     NormalMap;                                                                                          \n" 
    "    uniform  sampler2D     ShadowMAP;                                                                                          \n"   
    "    uniform  sampler2D     ColorMAP;                                                                                           \n"     
    "    uniform  sampler2D     exp_MASK;                                                                                           \n"   
    "    uniform  sampler2D     emit_MASK;\n" //bodyCracks_EMIT
    "    uniform  sampler2D     spec_MASK;                                                                                          \n"       
    "    uniform  sampler2D     mix_MASK;                                                                                           \n"       
    "    uniform  sampler2D     normal_MASK;                                                                                        \n"          
    "    uniform  sampler2D     FresnelMap;                                                                                         \n"          
    
    //--------------------------------------------
    "    uniform  highp  float  shinyBronze_0;                                                                                   \n"    
    "    uniform  highp  float  shinyBronze_1;                                                                                   \n"       
    "    uniform  highp  float  shinyBronze_2;                                                                                   \n"       
    "    uniform  highp  float  shinyBronze_3;                                                                                   \n"       
    
    //----------
    "    uniform  highp  float  emitBronze_0;                                                                                    \n"    
    "    uniform  highp  float  emitBronze_1;                                                                                    \n"       
    //==========
    "    uniform  highp  float  shinyStone_0;                                                                                       \n"    
    "    uniform  highp  float  shinyStone_1;                                                                                       \n"    
    "    uniform  highp  float  shinyStone_2;                                                                                       \n"    
    "    uniform  highp  float  shinyStone_3;                                                                                       \n"    
    
    //----------
    "    uniform  highp  float  emitStone_0;                                                                                        \n"    
    "    uniform  highp  float  emitStone_1;                                                                                        \n"    
    
    //--------------------------------------------
      
    
    //--------------------------------------------
    "    uniform  highp  float  shadowBias;                                                                                         \n"        
    //--------------------------------------------    
    "    varying  highp  vec4   shadow_uvPASS;                                                                                      \n"       
    //-------------------------------------------- 
    "    varying  highp  vec4   light0_posPASS;                                                                                     \n" 
    "    varying  highp  vec4   light1_posPASS;                                                                                     \n"     
    "    varying  highp  vec4   light2_posPASS;                                                                                     \n"     
    "    varying  highp  vec4   light3_posPASS;                                                                                     \n"     
 
    //======================================
    "    varying  highp  vec2   uv0_PASS;                                                                                           \n" 
    //======================================
    "             highp  vec3   NormalTex;                                                                                          \n" 
    "             highp  float  nDotL0;                                                                                             \n" 
    "             highp  float  nDotL1;                                                                                             \n"    
    "             highp  float  nDotL2;                                                                                             \n"         
    "             highp  float  nDotL3;                                                                                             \n"         
    
    //--------------------------------------------
    //"             highp  float  bias;                                                                                             \n"   
    "             highp  float  comp;                                                                                               \n" 
    "             highp  float  depth_PowerVR;                                                                                      \n" 
    "             highp  float  shadow;                                                                                             \n" 
    
    "             highp  vec4   texColor;                                                                                           \n" 
    "             highp  float  spec_EXP;                                                                                           \n" 
    "             highp  float  emit;\n" //bodyCracks_EMIT
    "             highp  float  spec;                                                                                               \n"    
    "             highp  float  mixShaders;                                                                                         \n"     
    "             highp  float  dampDOT3;                                                                                           \n"         
    //--------------------------------------------                                                                       
    "             highp  vec4   glossBronze_0;                                                                                        \n" 
    "             highp  vec4   glossBronze_1;                                                                                   \n"     
    "             highp  vec4   glossBronze_2;                                                                                      \n"    
    "             highp  vec4   glossBronze_3;                                                                                      \n"    
    
    //----------                                                                     
    "             highp  vec4   glossStone_0;                                                                                       \n" 
    "             highp  vec4   glossStone_1;                                                                                       \n" 
    "             highp  vec4   glossStone_2;                                                                                       \n" 
    "             highp  vec4   glossStone_3;                                                                                       \n" 
 
    //--------------------------------------------    
    "             highp  vec4   mixBronze;                                                                                          \n" 
    "             highp  vec4   mixStone;                                                                                           \n"     
      
    //======================================   
    "    varying    highp   vec4    Vertex;                                                                                         \n"                                                          
    "    varying    highp   vec4    inverseEye;                                                                                     \n"   
    "    varying    highp   vec3    invertView;                                                                                     \n" 
         //---------
    "               highp vec3   Reflect;                                                                                           \n"                                                                  
    "               highp vec3   RH;                                                                                                \n"                                                               
    "               highp float  fresnel;                                                                                           \n" 
    "               highp float  fresnelReflectance = 0.1;                                                                          \n" 	                                                      
    "               highp vec4   fresnelTex;                                                                                        \n" 
    //====================================== 
    "               highp vec4   color_A;                                                                                           \n" 
    "               highp vec4   color_B;                                                                                           \n"   
    "               highp vec4   color_C;                                                                                           \n"   
    
    //======================================  
    
        
    //=======================================================================================================================                      
  
    "void main()                                                                                                                    \n" 
    "{                                                                                                                              \n" 
    
    "    texColor                =  texture2D(ColorMAP,      uv0_PASS.xy);                                                          \n"     
    "    spec_EXP                =  texture2D(exp_MASK,      uv0_PASS.xy).r;                                                        \n" 
    "    emit                    =  texture2D(emit_MASK,     uv0_PASS.xy).r;\n" //bodyCracks_EMIT
    "    spec                    =  texture2D(spec_MASK,     uv0_PASS.xy).r;                                                        \n"  
    "    mixShaders              =  texture2D(mix_MASK,      uv0_PASS.xy).r;                                                        \n"  
    "    dampDOT3                =  texture2D(normal_MASK,   uv0_PASS.xy).r;                                                        \n"      
         //-------
   
    
    //-----------------------------------------------------------------------------------------------------------------
    //"    NormalTex                =  texture2D(NormalMap,  uv0_PASS.xy).xyz;           \n" //DefaultBlenderPose  
    //"    NormalTex                =  normalize((NormalTex  - 0.5));                                                               \n" 
    //"    NormalTex.yz             =  NormalTex.yz * -1.0;                                                                         \n" 
    "    NormalTex                =  texture2D(NormalMap,  uv0_PASS.xy).xyz;             \n" //CorrectedBlenderPose  
    "    NormalTex                =  normalize((NormalTex  - 0.5));                                                     \n" 
    "    NormalTex.zy             =  NormalTex.zy * -1.0;                                                                           \n" 
    "    nDotL0                   =  max(dot(NormalTex, normalize(light0_posPASS.xyz - normalize(gl_FragCoord.xyz))), 0.0);         \n" 
    "    nDotL1                   =  max(dot(NormalTex, normalize(light1_posPASS.xyz - normalize(gl_FragCoord.xyz))), 0.0);         \n" 
    "    nDotL2                   =  max(dot(NormalTex, normalize(light2_posPASS.xyz - normalize(gl_FragCoord.xyz))), 0.0);         \n"        
    "    nDotL3                   =  max(dot(NormalTex, normalize(light3_posPASS.xyz - normalize(gl_FragCoord.xyz))), 0.0);         \n"        
       
        //-----------------------------------------------------------------------------------------------------------------  
                                         //"bias                  =  shiny * tan(acos(nDotL0));                                     \n" 
                                         //"bias                  =  clamp(bias, 0.0, 0.1);                                         \n"               
    "    comp                     = (shadow_uvPASS.z / shadow_uvPASS.w) - shadowBias;\n" //"    bias =  0.006114; \n"  
    "    depth_PowerVR            =  texture2DProj(ShadowMAP, shadow_uvPASS).r;                                                     \n" 
   
    "    shadow                   =  comp <= depth_PowerVR ? 1.0 : 0.5;                                                             \n" 
         //---------------------------------------------------------------------------------------------------------------  
//-#############################################################################################################################################
    "    glossStone_0                =  max(pow(nDotL0,  shinyStone_0*mixShaders), 0.0) * vec4(1.0);                                                          \n" 
    "    glossStone_1                =  max(pow(nDotL1,  shinyStone_1*mixShaders), 0.0) * vec4(1.0);                                                          \n" 
    "    glossStone_2                =  max(pow(nDotL2,  shinyStone_2*mixShaders), 0.0) * vec4(1.0);                                                          \n" 
    "    glossStone_3                =  max(pow(nDotL3,  shinyStone_3*mixShaders), 0.0) * vec4(1.0);                                                          \n" 
//-#############################################################################################################################################


    "    glossBronze_0                     =  max(pow(nDotL0, 200.0 * shinyBronze_0), 0.0)  * texColor;                                                               \n" 


    "    Reflect                         =  reflect(invertView, NormalTex.xyz);                                                                                     \n"
    "    RH                              =  normalize(Reflect + invertView); //--THIS_COMPONENT_IS_SENSITIVE_TO ---> (Reflect +/- invertView)                       \n"
    "    fresnel                         =  fresnelReflectance + (1.0 - fresnelReflectance) * pow(dot(invertView, RH), 10.0) * nDotL0 ;                             \n" 
    "    fresnelTex                      =  texture2D(FresnelMap, 0.5 + 0.5 * normalize(Reflect + vec3(0.0, 0.0, 1.0)).xy) * 4.0;                                   \n"    
    
    "    color_A                         =  mix(glossBronze_0, fresnelTex, fresnel) * nDotL0 * 1.298;                                                                 \n"
    "    color_B                         =  texColor * pow(nDotL1, shinyBronze_0) * vec4(1.0, 1.0, 0.1, 1.0);                                                       \n"   
    "    color_C                         =  color_A + color_B + pow(nDotL1, shinyBronze_0 * 2.0) + texColor * pow(nDotL0,  spec*10.0) * emit;                              \n"

    "    mixBronze                       =  color_C;                                                                                                                 \n" 
    
    //-#############################################################################################################################################  

    "    mixStone                    = ((       nDotL0  *  0.4                                                                                     \n" 
    "                                +          nDotL1  *  0.9                                                                                     \n" 
    "                                +          nDotL2  *  0.15      ) * texColor * mixShaders * mixShaders)                                                                 \n" 

    "                                ;                                                        \n" 

//* vec4(0.9, 1.0, 0.9, 1.0)
  
//-#############################################################################################################################################  
//  "    gl_FragColor                 = (     mix(mixStone, mixBronze, mixShaders) *((emit-1.0)      *-1.0)     )     +     (emit*texColor);                           \n" 
    "    gl_FragColor                 = (    mix(mixBronze, mixStone,  mixShaders*mixShaders) - (nDotL0*(1.0-emit)*-1.9*vec4(0.65, 0.7, 1.0, 1.0))                      \n" 
    "                                   ) + (glossStone_0 + glossStone_1 + glossStone_2) * spec * emit;                                \n" 



//  "    gl_FragColor                 =       vec4(fresnel);                                                                                                                       \n" 

    
    "    gl_FragColor.w               =       shadow;                                                                                                                \n"     
  
    
    
    "}\n";

    
        
        
        
    //=======================================================================================================================                   

        stoneBronze_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);                                                          
        glShaderSource( stoneBronze_SHADER_VERTEX, 1, &vertexSource_stoneBronze, NULL );                                        
        glCompileShader( stoneBronze_SHADER_VERTEX);                                              //glShaderBinary                              
        //----------------------------------------------------                                                                  
        stoneBronze_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);                                                      
        glShaderSource( stoneBronze_SHADER_FRAGMENT, 1, &fragmentSource_stoneBronze, NULL );                                    
        glCompileShader(stoneBronze_SHADER_FRAGMENT);                                              //glShaderBinary                                                                             
        //--------------------------------------------------------------------------------------------------                    
        glAttachShader( stoneBronze_SHADER, stoneBronze_SHADER_VERTEX );                                                        
        glAttachShader( stoneBronze_SHADER, stoneBronze_SHADER_FRAGMENT );                                                      
        //--------------------------------------------------------------------------------------------------                    
        glBindAttribLocation(stoneBronze_SHADER,   0, "position");                                                              
        glBindAttribLocation(stoneBronze_SHADER,   1, "normal");                                                            
        glBindAttribLocation(stoneBronze_SHADER,   2, "uv0");                                                             
        //--------------------------------------------------------------------------------------------------                    
        glDeleteShader( stoneBronze_SHADER_VERTEX);                                                                             
        glDeleteShader( stoneBronze_SHADER_FRAGMENT);                                                                           
        glLinkProgram(stoneBronze_SHADER);                                                                                      
        //--------------------------------------------------------------------------------------------------                    
        UNIFORM_SHADOW_TEX_MATRIX_stoneBronze                         = glGetUniformLocation(stoneBronze_SHADER, "shadowTexMatrix");  
        UNIFORM_MODEL_ROTATIONinv_MATRIX_stoneBronze                  = glGetUniformLocation(stoneBronze_SHADER, "modelRotationINVmatrix"); 
        UNIFORM_PROJECTION_MATRIX_stoneBronze                         = glGetUniformLocation(stoneBronze_SHADER, "projectionMatrix");          
        UNIFORM_MODELVIEW_MATRIX_stoneBronze                          = glGetUniformLocation(stoneBronze_SHADER, "modelViewMatrix");                  
  
        //-------------------------------      
        UNIFORM_LIGHT0_POS_stoneBronze                                = glGetUniformLocation(stoneBronze_SHADER, "light0_POS");
        UNIFORM_LIGHT1_POS_stoneBronze                                = glGetUniformLocation(stoneBronze_SHADER, "light1_POS");
        UNIFORM_LIGHT2_POS_stoneBronze                                = glGetUniformLocation(stoneBronze_SHADER, "light2_POS");   
        UNIFORM_LIGHT3_POS_stoneBronze                                = glGetUniformLocation(stoneBronze_SHADER, "light3_POS");                
        //================================== 
        
        UNIFORM_shinyBronze_0_stoneBronze                             = glGetUniformLocation(stoneBronze_SHADER, "shinyBronze_0"); 
        UNIFORM_shinyBronze_1_stoneBronze                             = glGetUniformLocation(stoneBronze_SHADER, "shinyBronze_1"); 
        UNIFORM_shinyBronze_2_stoneBronze                             = glGetUniformLocation(stoneBronze_SHADER, "shinyBronze_2"); 
        UNIFORM_shinyBronze_3_stoneBronze                             = glGetUniformLocation(stoneBronze_SHADER, "shinyBronze_3");                 
        //--------
        UNIFORM_emitBronze_0_stoneBronze                              = glGetUniformLocation(stoneBronze_SHADER, "emitBronze_0");         
       
        //========
        UNIFORM_shinyStone_0_stoneBronze                              = glGetUniformLocation(stoneBronze_SHADER, "shinyStone_0"); 
        UNIFORM_shinyStone_1_stoneBronze                              = glGetUniformLocation(stoneBronze_SHADER, "shinyStone_1"); 
        UNIFORM_shinyStone_2_stoneBronze                              = glGetUniformLocation(stoneBronze_SHADER, "shinyStone_2"); 
        UNIFORM_shinyStone_3_stoneBronze                              = glGetUniformLocation(stoneBronze_SHADER, "shinyStone_3");                 
        //--------
        UNIFORM_emitStone_0_stoneBronze                               = glGetUniformLocation(stoneBronze_SHADER, "emitStone_0");            
        UNIFORM_emitStone_1_stoneBronze                               = glGetUniformLocation(stoneBronze_SHADER, "emitStone_1");            
        
        //--------------------------------
        UNIFORM_shadowBias_stoneBronze                                = glGetUniformLocation(stoneBronze_SHADER, "shadowBias");          
        //--------------------------------
        UNIFORM_TEXTURE_DOT3_stoneBronze                              = glGetUniformLocation(stoneBronze_SHADER, "NormalMap");     
        UNIFORM_TEXTURE_SHADOW_stoneBronze                            = glGetUniformLocation(stoneBronze_SHADER, "ShadowMAP");           
        UNIFORM_TEXTURE_COLOR_stoneBronze                             = glGetUniformLocation(stoneBronze_SHADER, "ColorMAP");  
        UNIFORM_TEXTURE_EXP_MASK_stoneBronze                          = glGetUniformLocation(stoneBronze_SHADER, "exp_MASK");  
        UNIFORM_TEXTURE_EMIT_MASK_stoneBronze                         = glGetUniformLocation(stoneBronze_SHADER, "emit_MASK");  
        UNIFORM_TEXTURE_SPEC_MASK_stoneBronze                         = glGetUniformLocation(stoneBronze_SHADER, "spec_MASK"); 
        UNIFORM_TEXTURE_MIX_MASK_stoneBronze                          = glGetUniformLocation(stoneBronze_SHADER, "mix_MASK"); 
        UNIFORM_TEXTURE_NORMAL_MASK_stoneBronze                       = glGetUniformLocation(stoneBronze_SHADER, "normal_MASK"); 
        UNIFORM_TEXTURE_FRESNEL_TEX_stoneBronze                       = glGetUniformLocation(stoneBronze_SHADER, "FresnelMap"); 

//######################################################
#include "settings.cpp"











