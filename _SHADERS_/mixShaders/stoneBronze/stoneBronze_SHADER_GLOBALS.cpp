//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
 
var         stoneBronze_LIGHT0_POS[4];
var         stoneBronze_LIGHT1_POS[4];
var         stoneBronze_LIGHT2_POS[4];
var         stoneBronze_LIGHT3_POS[4];

//-----------------------------------
//========
var         shinyBronze_0_stoneBronze;
var         shinyBronze_1_stoneBronze;
var         shinyBronze_2_stoneBronze;
var         shinyBronze_3_stoneBronze;
//--------
var         emitBronze_0_stoneBronze;
var         emitBronze_1_stoneBronze;

//========
var         shinyStone_0_stoneBronze;
var         shinyStone_1_stoneBronze;
var         shinyStone_2_stoneBronze;
var         shinyStone_3_stoneBronze;

//--------
var         emitStone_0_stoneBronze;
var         emitStone_1_stoneBronze;

//========

//-----------------------------------
//=====================================================================================
GLuint      stoneBronze_SHADER_VERTEX;                                                                                 
GLuint      stoneBronze_SHADER_FRAGMENT;                                                                               
GLuint      stoneBronze_SHADER;     
//-------------------------------------------------------------------------------------
GLuint      UNIFORM_LIGHT0_POS_stoneBronze;
GLuint      UNIFORM_LIGHT1_POS_stoneBronze;
GLuint      UNIFORM_LIGHT2_POS_stoneBronze;
GLuint      UNIFORM_LIGHT3_POS_stoneBronze;

//=====                                                                     
GLuint      UNIFORM_shadowBias_stoneBronze;
//--------------------------------------
GLuint      UNIFORM_shinyBronze_0_stoneBronze;
GLuint      UNIFORM_shinyBronze_1_stoneBronze;
GLuint      UNIFORM_shinyBronze_2_stoneBronze;
GLuint      UNIFORM_shinyBronze_3_stoneBronze;

//------
GLuint      UNIFORM_emitBronze_0_stoneBronze;
GLuint      UNIFORM_emitBronze_1_stoneBronze;

//------
GLuint      UNIFORM_shinyStone_0_stoneBronze;
GLuint      UNIFORM_shinyStone_1_stoneBronze;
GLuint      UNIFORM_shinyStone_2_stoneBronze;
GLuint      UNIFORM_shinyStone_3_stoneBronze;

//------
GLuint      UNIFORM_emitStone_0_stoneBronze;
GLuint      UNIFORM_emitStone_1_stoneBronze;


//-------------------------------------------------------------------------------------
GLuint      UNIFORM_SHADOW_TEX_MATRIX_stoneBronze;
GLuint      UNIFORM_MODEL_ROTATIONinv_MATRIX_stoneBronze;                 
GLuint      UNIFORM_PROJECTION_MATRIX_stoneBronze;  
GLuint      UNIFORM_MODELVIEW_MATRIX_stoneBronze; 
GLuint      UNIFORM_VIEW_MATRIX_stoneBronze; 

//-------------------------------------------------------------------------------------
GLuint      UNIFORM_TEXTURE_DOT3_stoneBronze;
GLuint      UNIFORM_TEXTURE_SHADOW_stoneBronze;
GLuint      UNIFORM_TEXTURE_COLOR_stoneBronze;
GLuint      UNIFORM_TEXTURE_EXP_MASK_stoneBronze; //---THESE_COULD_BE_SHORTENED
GLuint      UNIFORM_TEXTURE_EMIT_MASK_stoneBronze;
GLuint      UNIFORM_TEXTURE_SPEC_MASK_stoneBronze;
GLuint      UNIFORM_TEXTURE_MIX_MASK_stoneBronze;
GLuint      UNIFORM_TEXTURE_NORMAL_MASK_stoneBronze;
GLuint      UNIFORM_TEXTURE_FRESNEL_TEX_stoneBronze;



