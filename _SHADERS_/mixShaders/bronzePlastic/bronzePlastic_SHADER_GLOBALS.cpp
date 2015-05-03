//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

var         bronzePlastic_LIGHT0_POS[]                 =  {  8.55039, 4.82302, 25.01, 1.0};
var         bronzePlastic_LIGHT1_POS[]                 =  {-2.1128, -0.230402, 10, 1};
var         bronzePlastic_LIGHT2_POS[]                 =  {-13.4492, 2.6505, 19.1015, 1};


//-----------------------------------
//========
var         shinyBronze_0_bronzePlastic                =  80.86;
var         shinyBronze_1_bronzePlastic                =  8.3;
var         shinyBronze_2_bronzePlastic                =  150.0;
//--------
var         emitBronze_0_bronzePlastic                 =  1.0;
var         emitBronze_1_bronzePlastic                 =  1.0;
//========
var          shinyRubber_0_bronzePlastic               =  1.14;
var          shinyRubber_1_bronzePlastic               =  1.8;
var         shinyRubber_2_bronzePlastic                =  1.0;

//--------
var         emitRubber_0_bronzePlastic                 =    -0.709953;
var         emitRubber_1_bronzePlastic                 =     1.0;

//========
                                    
//-----------------------------------
//=====================================================================================
GLuint      bronzePlastic_SHADER_VERTEX;                                                                                 
GLuint      bronzePlastic_SHADER_FRAGMENT;                                                                               
GLuint      bronzePlastic_SHADER;     
//-------------------------------------------------------------------------------------
GLuint      UNIFORM_LIGHT0_POS_bronzePlastic;
GLuint      UNIFORM_LIGHT1_POS_bronzePlastic;
GLuint      UNIFORM_LIGHT2_POS_bronzePlastic;

//=====                                                                     
GLuint      UNIFORM_shadowBias_bronzePlastic;
//--------------------------------------
GLuint      UNIFORM_shinyBronze_0_bronzePlastic;
GLuint      UNIFORM_shinyBronze_1_bronzePlastic;
GLuint      UNIFORM_shinyBronze_2_bronzePlastic;

//------
GLuint      UNIFORM_emitBronze_0_bronzePlastic;
GLuint      UNIFORM_emitBronze_1_bronzePlastic;

//------
GLuint      UNIFORM_shinyRubber_0_bronzePlastic;
GLuint      UNIFORM_shinyRubber_1_bronzePlastic;
GLuint      UNIFORM_shinyRubber_2_bronzePlastic;

//------
GLuint      UNIFORM_emitRubber_0_bronzePlastic;
GLuint      UNIFORM_emitRubber_1_bronzePlastic;


//-------------------------------------------------------------------------------------
GLuint      UNIFORM_SHADOW_TEX_MATRIX_bronzePlastic;
GLuint      UNIFORM_MODEL_ROTATIONinv_MATRIX_bronzePlastic;                 
GLuint      UNIFORM_PROJECTION_MATRIX_bronzePlastic;  
GLuint      UNIFORM_MODELVIEW_MATRIX_bronzePlastic; 
GLuint      UNIFORM_VIEW_MATRIX_bronzePlastic; 

//-------------------------------------------------------------------------------------
GLuint      UNIFORM_TEXTURE_DOT3_bronzePlastic;
GLuint      UNIFORM_TEXTURE_SHADOW_bronzePlastic;
GLuint      UNIFORM_TEXTURE_COLOR_bronzePlastic;
GLuint      UNIFORM_TEXTURE_EXP_MASK_bronzePlastic; //---THESE_COULD_BE_SHORTENED
GLuint      UNIFORM_TEXTURE_EMIT_MASK_bronzePlastic;
GLuint      UNIFORM_TEXTURE_SPEC_MASK_bronzePlastic;
GLuint      UNIFORM_TEXTURE_MIX_MASK_bronzePlastic;
GLuint      UNIFORM_TEXTURE_NORMAL_MASK_bronzePlastic;
GLuint      UNIFORM_TEXTURE_FRESNEL_TEX_bronzePlastic;



