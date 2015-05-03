ColorRenderMatrixFunctions();
 
 glUseProgram(bronzePlastic_SHADER);
          //------------------------------------------------------------------------------
          glVertexAttribPointer(0,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(0));
          glEnableVertexAttribArray(0);
          glVertexAttribPointer(1,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(12));
          glEnableVertexAttribArray(1);
          glVertexAttribPointer(2,     2, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(24));
          glEnableVertexAttribArray(2);
          //------------------------------------------------------------------------------------------------
          glUniformMatrix4fv(UNIFORM_SHADOW_TEX_MATRIX_bronzePlastic,                1, 0,    tempMatrix_B);           
          glUniformMatrix4fv(UNIFORM_MODEL_ROTATIONinv_MATRIX_bronzePlastic,         1, 0,    modelRotationINVmatrix);          
          glUniformMatrix4fv(UNIFORM_PROJECTION_MATRIX_bronzePlastic,                1, 0,    tempMatrix_D);
          glUniformMatrix4fv(UNIFORM_MODELVIEW_MATRIX_bronzePlastic,                 1, 0,    modelViewMatrix);
      
          //---------------
        
          //---------------

          //------------------------------------------------------------------------------------------------
          glUniform4f(UNIFORM_LIGHT0_POS_bronzePlastic,                bronzePlastic_LIGHT0_POS[0],
                                                                       bronzePlastic_LIGHT0_POS[1],
                                                                       bronzePlastic_LIGHT0_POS[2],
                                                                       bronzePlastic_LIGHT0_POS[3]);
                                                                       
          glUniform4f(UNIFORM_LIGHT1_POS_bronzePlastic,                bronzePlastic_LIGHT1_POS[0],
                                                                       bronzePlastic_LIGHT1_POS[1],
                                                                       bronzePlastic_LIGHT1_POS[2],
                                                                       bronzePlastic_LIGHT1_POS[3]);                                                                       
                                                                      
          glUniform4f(UNIFORM_LIGHT2_POS_bronzePlastic,                bronzePlastic_LIGHT2_POS[0],
                                                                       bronzePlastic_LIGHT2_POS[1],
                                                                       bronzePlastic_LIGHT2_POS[2],
                                                                       bronzePlastic_LIGHT2_POS[3]);                                                                        
          
          glUniform1f(UNIFORM_shadowBias_bronzePlastic,                        shadowBias);          
          //---------------------------------------
          glUniform1f(UNIFORM_shinyBronze_0_bronzePlastic,                     shinyBronze_0_bronzePlastic);
          glUniform1f(UNIFORM_shinyBronze_1_bronzePlastic,                     shinyBronze_1_bronzePlastic);  
          glUniform1f(UNIFORM_shinyBronze_2_bronzePlastic,                     shinyBronze_2_bronzePlastic);                   
          //-------
          glUniform1f(UNIFORM_emitBronze_0_bronzePlastic,                      emitBronze_0_bronzePlastic);   
          glUniform1f(UNIFORM_emitBronze_1_bronzePlastic,                      emitBronze_1_bronzePlastic);   
          
          //=======
          glUniform1f(UNIFORM_shinyRubber_0_bronzePlastic,                    shinyRubber_0_bronzePlastic);
          glUniform1f(UNIFORM_shinyRubber_1_bronzePlastic,                    shinyRubber_1_bronzePlastic);
          glUniform1f(UNIFORM_shinyRubber_2_bronzePlastic,                    shinyRubber_2_bronzePlastic);          
          //-------
          glUniform1f(UNIFORM_emitRubber_0_bronzePlastic,                     emitRubber_0_bronzePlastic);             
          glUniform1f(UNIFORM_emitRubber_1_bronzePlastic,                     emitRubber_1_bronzePlastic);             
          
                 
          //=======
          //-------------------------------------------------------------------------------------------------
          glUniform1i(UNIFORM_TEXTURE_DOT3_bronzePlastic,          0);          
          glUniform1i(UNIFORM_TEXTURE_SHADOW_bronzePlastic,        1);
          glUniform1i(UNIFORM_TEXTURE_COLOR_bronzePlastic,         2);
          glUniform1i(UNIFORM_TEXTURE_EXP_MASK_bronzePlastic,      3);
          glUniform1i(UNIFORM_TEXTURE_EMIT_MASK_bronzePlastic,     4);
          glUniform1i(UNIFORM_TEXTURE_SPEC_MASK_bronzePlastic,     5);
          glUniform1i(UNIFORM_TEXTURE_MIX_MASK_bronzePlastic,      6);
          glUniform1i(UNIFORM_TEXTURE_NORMAL_MASK_bronzePlastic,   7);
          glUniform1i(UNIFORM_TEXTURE_FRESNEL_TEX_bronzePlastic,   8);    
    
    
    //====================================================================================================================

//---------------------------------------------------------------
                                                                                                                        

