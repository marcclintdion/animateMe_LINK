    bronzePlastic_SHADER = glCreateProgram();                                                                                     
        //----------------------------------------------------                                                                  
    const GLchar *vertexSource_bronzePlastic =                                                                                    

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
    
    //--------------------------------------------
    "    varying  highp  vec4   shadow_uvPASS;                                                                                      \n"       
    //--------------------------------------------
    "    varying  highp  vec4   light0_posPASS;                                                                                     \n" 
    "    varying  highp  vec4   light1_posPASS;                                                                                     \n"     
    "    varying  highp  vec4   light2_posPASS;                                                                                     \n"     
    
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
          
          //-------------------------------------------------------------------------------
    "     gl_Position             =  projectionMatrix * position;                                                                   \n" 
    
    " } \n";   
    
    //===================================================================================================================================                 

    const GLchar *fragmentSource_bronzePlastic =                                                                                  

    "#ifdef GL_ES                                                                                                                   \n" 
    "#else                                                                                                                          \n" 
    "#define highp                                                                                                                  \n" 
    "#endif                                                                                                                         \n" 
    
    
    
    
    "    uniform  sampler2D     NormalMap;                                                                                          \n" 
    "    uniform  sampler2D     ShadowMAP;                                                                                          \n"   
    "    uniform  sampler2D     ColorMAP;                                                                                           \n"     
    "    uniform  sampler2D     exp_MASK;                                                                                           \n"   
    "    uniform  sampler2D     emit_MASK;                                                                                          \n"     
    "    uniform  sampler2D     spec_MASK;                                                                                          \n"       
    "    uniform  sampler2D     mix_MASK;                                                                                           \n"       
    "    uniform  sampler2D     normal_MASK;                                                                                        \n"          
    "    uniform  sampler2D     FresnelMap;                                                                                         \n"          
    
    //--------------------------------------------
    "    uniform  highp  float  shinyBronze_0;                                                                                   \n"    
    "    uniform  highp  float  shinyBronze_1;                                                                                   \n"       
    "    uniform  highp  float  shinyBronze_2;                                                                                   \n"       
   
    //----------
    "    uniform  highp  float  emitBronze_0;                                                                                    \n"    
    "    uniform  highp  float  emitBronze_1;                                                                                    \n"       
    //==========
    "    uniform  highp  float  shinyRubber_0;                                                                                       \n"    
    "    uniform  highp  float  shinyRubber_1;                                                                                       \n"    
    "    uniform  highp  float  shinyRubber_2;                                                                                       \n"    
    
    //----------
    "    uniform  highp  float  emitRubber_0;                                                                                        \n"    
    "    uniform  highp  float  emitRubber_1;                                                                                        \n"    
    
    //--------------------------------------------
      
    
    //--------------------------------------------
    "    uniform  highp  float  shadowBias;                                                                                         \n"        
    //--------------------------------------------    
    "    varying  highp  vec4   shadow_uvPASS;                                                                                      \n"       
    //-------------------------------------------- 
    "    varying  highp  vec4   light0_posPASS;                                                                                     \n" 
    "    varying  highp  vec4   light1_posPASS;                                                                                     \n"     
    "    varying  highp  vec4   light2_posPASS;                                                                                     \n"     
    
    //======================================
    "    varying  highp  vec2   uv0_PASS;                                                                                           \n" 
    //======================================
    "             highp  vec3   NormalTex;                                                                                          \n" 
    "             highp  float  nDotL0;                                                                                             \n" 
    "             highp  float  nDotL1;                                                                                             \n"     
    "             highp  float  nDotL2;                                                                                             \n"     
    
    //--------------------------------------------
    //"             highp  float  bias;                                                                                             \n"   
    "             highp  float  comp;                                                                                               \n" 
    "             highp  float  depth_PowerVR;                                                                                      \n" 
    "             highp  float  shadow;                                                                                             \n" 
    
    "             highp  vec4   texColor;                                                                                           \n" 
    "             highp  float  spec_EXP;                                                                                           \n" 
    "             highp  float  emit;                                                                                               \n"    
    "             highp  float  spec;                                                                                               \n"    
    "             highp  float  mixShaders;                                                                                         \n"     
    "             highp  float  dampDOT3;                                                                                           \n"         
    //--------------------------------------------                                                                       
    "             highp  vec4   glossBronze_0;                                                                                        \n" 
    "             highp  vec4   glossBronze_1;                                                                                   \n"     
    "             highp  vec4   glossBronze_2;                                                                                        \n" 

    //----------                                                                     
    "             highp  vec4   glossRubber_0;                                                                                     \n" 
    "             highp  vec4   glossRubber_1;                                                                                     \n" 
    "             highp  vec4   glossRubber_2;                                                                                     \n" 
 
    //--------------------------------------------    
    "             highp  vec4   mixBronze;                                                                                          \n" 
    "             highp  vec4   mixRubber;                                                                                         \n"     
      
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
    "    emit                    =  texture2D(emit_MASK,     uv0_PASS.xy).r;                                                        \n" 
    "    spec                    =  texture2D(spec_MASK,     uv0_PASS.xy).r;                                                        \n"  
    "    mixShaders              =  texture2D(mix_MASK,      uv0_PASS.xy).r;                                                        \n"  
    "    dampDOT3                =  texture2D(normal_MASK,   uv0_PASS.xy).r;                                                        \n"      
         //-------
   
    
    //-----------------------------------------------------------------------------------------------------------------
    //"    NormalTex                =  texture2D(NormalMap,  uv0_PASS.xy).xyz;           \n" //DefaultBlenderPose  
    //"    NormalTex                =  normalize((NormalTex  - 0.5));                                                               \n" 
    //"    NormalTex.yz             =  NormalTex.yz * -1.0;                                                                         \n" 
    "    NormalTex                =  texture2D(NormalMap,  uv0_PASS.xy).xyz;             \n" //CorrectedBlenderPose  
    "    NormalTex                =  normalize((NormalTex  - 0.5)) * dampDOT3;                                                      \n" 
    "    NormalTex.zy             =  NormalTex.zy * -1.0;                                                                           \n" 
    "    nDotL0                   =  max(dot(NormalTex, normalize(light0_posPASS.xyz - normalize(gl_FragCoord.xyz))), 0.0);         \n" 
    "    nDotL1                   =  max(dot(NormalTex, normalize(light1_posPASS.xyz - normalize(gl_FragCoord.xyz))), 0.0);         \n" 
    "    nDotL2                   =  max(dot(NormalTex, normalize(light2_posPASS.xyz - normalize(gl_FragCoord.xyz))), 0.0);         \n" 
       
       
        //-----------------------------------------------------------------------------------------------------------------  
                                         //"bias                  =  shiny * tan(acos(nDotL0));                                     \n" 
                                         //"bias                  =  clamp(bias, 0.0, 0.1);                                         \n"               
                                         //-----------------------             
    //"    bias                     =  0.006114;                                                                                    \n"         
    "    comp                     = (shadow_uvPASS.z / shadow_uvPASS.w) - shadowBias;                                               \n" 
    "    depth_PowerVR            =  texture2DProj(ShadowMAP, shadow_uvPASS).r;                                                     \n" 
   
    "    shadow                =  comp <= depth_PowerVR ? 1.0 : 0.5;                                                                \n" 
         //---------------------------------------------------------------------------------------------------------------  
//-#############################################################################################################################################
    "    glossBronze_0                =  vec4(    max(  pow(nDotL0, shinyBronze_0), 0.0  )    ) * texColor;                                                                           \n" 
    "    glossBronze_1                =  vec4(    max(  pow(nDotL1, shinyBronze_1), 0.0  )    );                                                                           \n" 
    "    glossBronze_2                =  vec4(    max(  pow(nDotL2, shinyBronze_2), 0.0  )    );                                                                           \n" 


    "    Reflect                         =  reflect(invertView, NormalTex.xyz);                                                                                     \n"
    "    RH                              =  normalize(Reflect + invertView); //this component is sensitive to ---> (Reflect +/- invertView)                         \n"
    "    fresnel                         =  fresnelReflectance + (1.0 - fresnelReflectance) * pow(dot(invertView, RH), 10.0) * nDotL0 ;                             \n" 
    "    fresnelTex                      =  texture2D(FresnelMap, 0.5 + 0.5 * normalize(Reflect + vec3(0.0, 0.0, 1.0)).xy) * 4.0;                                   \n"    
    
    "    color_A                         =  mix(glossBronze_0, fresnelTex, fresnel) * nDotL0 * 1.298;                                                                 \n"
    "    color_B                         =  texColor * pow(nDotL1, shinyBronze_0) * vec4(1.0, 1.0, 0.1, 1.0);                                                       \n"   
    "    color_C                         =  color_A + color_B + pow(nDotL1, shinyBronze_0 * 2.0) + texColor * pow(nDotL0,  spec*30.0);                              \n"



    "    mixBronze                       = color_C + (glossBronze_1 * texColor);                                                                                                                 \n" 
    
    //-#############################################################################################################################################  
    //"    glossRubber                =  max(pow(nDotL0,  spec_EXP * 1.0 * shinyRubber_0), 0.0)  * texColor;                                                        \n" 
    "    glossRubber_0                =  max(pow(nDotL0,  shinyRubber_0), 0.0) * vec4(1.0);                                                                         \n" 
    "    glossRubber_1                =  max(pow(nDotL1,  shinyRubber_1), 0.0) * vec4(1.0);                                                                         \n" 


    "    mixRubber                    = (  texColor  * emitRubber_0  + texColor * nDotL0 * nDotL0                                                                   \n" 

    "                                    )  + ( glossRubber_0 * 0.3  + glossRubber_1 * 0.3) * spec;                                                                 \n" 
  
//-#############################################################################################################################################  
    "    gl_FragColor             = (      mix(mixRubber, mixBronze, mixShaders) * ((emit-1.0)*-1.0)      )    \n" 
    "                               +     (emit*texColor);                                                     \n" 

//"    gl_FragColor             = glossBronze_1;                                                                                                                       \n" 

    
    "    gl_FragColor.w           =   shadow + emit;                                                                                                                \n"     
  
    
    
    "}\n";

    
        
        
        
    //=======================================================================================================================                   

        bronzePlastic_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);                                                          
        glShaderSource( bronzePlastic_SHADER_VERTEX, 1, &vertexSource_bronzePlastic, NULL );                                        
        glCompileShader( bronzePlastic_SHADER_VERTEX);                                              //glShaderBinary                              
        //----------------------------------------------------                                                                  
        bronzePlastic_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);                                                      
        glShaderSource( bronzePlastic_SHADER_FRAGMENT, 1, &fragmentSource_bronzePlastic, NULL );                                    
        glCompileShader(bronzePlastic_SHADER_FRAGMENT);                                              //glShaderBinary                                                                             
        //--------------------------------------------------------------------------------------------------                    
        glAttachShader( bronzePlastic_SHADER, bronzePlastic_SHADER_VERTEX );                                                        
        glAttachShader( bronzePlastic_SHADER, bronzePlastic_SHADER_FRAGMENT );                                                      
        //--------------------------------------------------------------------------------------------------                    
        glBindAttribLocation(bronzePlastic_SHADER,   0, "position");                                                              
        glBindAttribLocation(bronzePlastic_SHADER,   1, "normal");                                                            
        glBindAttribLocation(bronzePlastic_SHADER,   2, "uv0");                                                             
        //--------------------------------------------------------------------------------------------------                    
        glDeleteShader( bronzePlastic_SHADER_VERTEX);                                                                             
        glDeleteShader( bronzePlastic_SHADER_FRAGMENT);                                                                           
        glLinkProgram(bronzePlastic_SHADER);                                                                                      
        //--------------------------------------------------------------------------------------------------                    
        UNIFORM_SHADOW_TEX_MATRIX_bronzePlastic                         = glGetUniformLocation(bronzePlastic_SHADER, "shadowTexMatrix");  
        UNIFORM_MODEL_ROTATIONinv_MATRIX_bronzePlastic                  = glGetUniformLocation(bronzePlastic_SHADER, "modelRotationINVmatrix"); 
        UNIFORM_PROJECTION_MATRIX_bronzePlastic                         = glGetUniformLocation(bronzePlastic_SHADER, "projectionMatrix");          
        UNIFORM_MODELVIEW_MATRIX_bronzePlastic                          = glGetUniformLocation(bronzePlastic_SHADER, "modelViewMatrix");                  
  
        //-------------------------------      
        UNIFORM_LIGHT0_POS_bronzePlastic                                = glGetUniformLocation(bronzePlastic_SHADER, "light0_POS");
        UNIFORM_LIGHT1_POS_bronzePlastic                                = glGetUniformLocation(bronzePlastic_SHADER, "light1_POS");
        UNIFORM_LIGHT2_POS_bronzePlastic                                = glGetUniformLocation(bronzePlastic_SHADER, "light2_POS");        
        //================================== 
        
        UNIFORM_shinyBronze_0_bronzePlastic                             = glGetUniformLocation(bronzePlastic_SHADER, "shinyBronze_0"); 
        UNIFORM_shinyBronze_1_bronzePlastic                             = glGetUniformLocation(bronzePlastic_SHADER, "shinyBronze_1"); 
        UNIFORM_shinyBronze_2_bronzePlastic                             = glGetUniformLocation(bronzePlastic_SHADER, "shinyBronze_2");         
        
        //--------
        UNIFORM_emitBronze_0_bronzePlastic                              = glGetUniformLocation(bronzePlastic_SHADER, "emitBronze_0");         
       
        //========
        UNIFORM_shinyRubber_0_bronzePlastic                            = glGetUniformLocation(bronzePlastic_SHADER, "shinyRubber_0"); 
        UNIFORM_shinyRubber_1_bronzePlastic                            = glGetUniformLocation(bronzePlastic_SHADER, "shinyRubber_1"); 
        UNIFORM_shinyRubber_2_bronzePlastic                            = glGetUniformLocation(bronzePlastic_SHADER, "shinyRubber_2");         
        //--------
        UNIFORM_emitRubber_0_bronzePlastic                             = glGetUniformLocation(bronzePlastic_SHADER, "emitRubber_0");            
        UNIFORM_emitRubber_1_bronzePlastic                             = glGetUniformLocation(bronzePlastic_SHADER, "emitRubber_1");            
        
        //--------------------------------
        UNIFORM_shadowBias_bronzePlastic                                = glGetUniformLocation(bronzePlastic_SHADER, "shadowBias");          
        //--------------------------------
        UNIFORM_TEXTURE_DOT3_bronzePlastic                              = glGetUniformLocation(bronzePlastic_SHADER, "NormalMap");     
        UNIFORM_TEXTURE_SHADOW_bronzePlastic                            = glGetUniformLocation(bronzePlastic_SHADER, "ShadowMAP");           
        UNIFORM_TEXTURE_COLOR_bronzePlastic                             = glGetUniformLocation(bronzePlastic_SHADER, "ColorMAP");  
        UNIFORM_TEXTURE_EXP_MASK_bronzePlastic                          = glGetUniformLocation(bronzePlastic_SHADER, "exp_MASK");  
        UNIFORM_TEXTURE_EMIT_MASK_bronzePlastic                         = glGetUniformLocation(bronzePlastic_SHADER, "emit_MASK");  
        UNIFORM_TEXTURE_SPEC_MASK_bronzePlastic                         = glGetUniformLocation(bronzePlastic_SHADER, "spec_MASK"); 
        UNIFORM_TEXTURE_MIX_MASK_bronzePlastic                          = glGetUniformLocation(bronzePlastic_SHADER, "mix_MASK"); 
        UNIFORM_TEXTURE_NORMAL_MASK_bronzePlastic                       = glGetUniformLocation(bronzePlastic_SHADER, "normal_MASK"); 
        UNIFORM_TEXTURE_FRESNEL_TEX_bronzePlastic                       = glGetUniformLocation(bronzePlastic_SHADER, "FresnelMap"); 













