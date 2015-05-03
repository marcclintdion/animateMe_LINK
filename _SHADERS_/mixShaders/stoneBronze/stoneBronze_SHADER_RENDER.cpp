ColorRenderMatrixFunctions();
 
 glUseProgram(stoneBronze_SHADER);
          //------------------------------------------------------------------------------
          glVertexAttribPointer(0,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(0));
          glEnableVertexAttribArray(0);
          glVertexAttribPointer(1,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(12));
          glEnableVertexAttribArray(1);
          glVertexAttribPointer(2,     2, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(24));
          glEnableVertexAttribArray(2);
          //------------------------------------------------------------------------------------------------
          glUniformMatrix4fv(UNIFORM_SHADOW_TEX_MATRIX_stoneBronze,                1, 0,    tempMatrix_B);           
          glUniformMatrix4fv(UNIFORM_MODEL_ROTATIONinv_MATRIX_stoneBronze,         1, 0,    modelRotationINVmatrix);          
          glUniformMatrix4fv(UNIFORM_PROJECTION_MATRIX_stoneBronze,                1, 0,    tempMatrix_D);
          glUniformMatrix4fv(UNIFORM_MODELVIEW_MATRIX_stoneBronze,                 1, 0,    modelViewMatrix);
      
          //---------------
        
          //---------------

          //------------------------------------------------------------------------------------------------
          glUniform4f(UNIFORM_LIGHT0_POS_stoneBronze,                  stoneBronze_LIGHT0_POS[0],
                                                                       stoneBronze_LIGHT0_POS[1],
                                                                       stoneBronze_LIGHT0_POS[2],
                                                                       stoneBronze_LIGHT0_POS[3]);
                                                                       
          glUniform4f(UNIFORM_LIGHT1_POS_stoneBronze,                  stoneBronze_LIGHT1_POS[0],
                                                                       stoneBronze_LIGHT1_POS[1],
                                                                       stoneBronze_LIGHT1_POS[2],
                                                                       stoneBronze_LIGHT1_POS[3]);                                                                       
                                                                       
          glUniform4f(UNIFORM_LIGHT2_POS_stoneBronze,                  stoneBronze_LIGHT2_POS[0],
                                                                       stoneBronze_LIGHT2_POS[1],
                                                                       stoneBronze_LIGHT2_POS[2],
                                                                       stoneBronze_LIGHT2_POS[3]);                                                                         
                                                                       
          
          glUniform1f(UNIFORM_shadowBias_stoneBronze,                        shadowBias);          
          //---------------------------------------
          glUniform1f(UNIFORM_shinyBronze_0_stoneBronze,                     shinyBronze_0_stoneBronze);
          glUniform1f(UNIFORM_shinyBronze_1_stoneBronze,                     shinyBronze_1_stoneBronze);  
          glUniform1f(UNIFORM_shinyBronze_2_stoneBronze,                     shinyBronze_2_stoneBronze);                    
          //-------
          glUniform1f(UNIFORM_emitBronze_0_stoneBronze,                      emitBronze_0_stoneBronze);   
          glUniform1f(UNIFORM_emitBronze_1_stoneBronze,                      emitBronze_1_stoneBronze);   
          
          //=======
          glUniform1f(UNIFORM_shinyStone_0_stoneBronze,                      shinyStone_0_stoneBronze);
          glUniform1f(UNIFORM_shinyStone_1_stoneBronze,                      shinyStone_1_stoneBronze);
          glUniform1f(UNIFORM_shinyStone_2_stoneBronze,                      shinyStone_2_stoneBronze);
          
          //-------
          glUniform1f(UNIFORM_emitStone_0_stoneBronze,                       emitStone_0_stoneBronze);             
          glUniform1f(UNIFORM_emitStone_1_stoneBronze,                       emitStone_1_stoneBronze);             
          
                 
          //=======
          //-------------------------------------------------------------------------------------------------
          glUniform1i(UNIFORM_TEXTURE_DOT3_stoneBronze,          0);          
          glUniform1i(UNIFORM_TEXTURE_SHADOW_stoneBronze,        1);
          glUniform1i(UNIFORM_TEXTURE_COLOR_stoneBronze,         2);
          glUniform1i(UNIFORM_TEXTURE_EXP_MASK_stoneBronze,      3);
          glUniform1i(UNIFORM_TEXTURE_EMIT_MASK_stoneBronze,     4);
          glUniform1i(UNIFORM_TEXTURE_SPEC_MASK_stoneBronze,     5);
          glUniform1i(UNIFORM_TEXTURE_MIX_MASK_stoneBronze,      6);
          glUniform1i(UNIFORM_TEXTURE_NORMAL_MASK_stoneBronze,   7);
          glUniform1i(UNIFORM_TEXTURE_FRESNEL_TEX_stoneBronze,   8);    
    
    
    //====================================================================================================================

//---------------------------------------------------------------
                                                                                                                        

