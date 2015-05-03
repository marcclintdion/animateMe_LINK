ColorRenderMatrixFunctions();

 
 glUseProgram(skin_A1A_SHADER);
          //------------------------------------------------------------------------------
          glVertexAttribPointer(0,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(0));
          glEnableVertexAttribArray(0);
          glVertexAttribPointer(1,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(12));
          glEnableVertexAttribArray(1);
          glVertexAttribPointer(2,     2, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(24));
          glEnableVertexAttribArray(2);
          //------------------------------------------------------------------------------------------------
          glUniformMatrix4fv(UNIFORM_SHADOW_TEX_MATRIX_skin_A1A,                1, 0,    tempMatrix_B);           
          glUniformMatrix4fv(UNIFORM_MODEL_ROTATIONinv_MATRIX_skin_A1A,         1, 0,    modelRotationINVmatrix);          
          glUniformMatrix4fv(UNIFORM_PROJECTION_MATRIX_skin_A1A,                1, 0,    tempMatrix_D);
          glUniformMatrix4fv(UNIFORM_MODELVIEW_MATRIX_skin_A1A,                 1, 0,    modelViewMatrix);
      
          //---------------
        
          //---------------

          //------------------------------------------------------------------------------------------------
          glUniform4f(UNIFORM_LIGHT0_POS_skin_A1A,                     skin_A1A_LIGHT0_POS[0],
                                                                       skin_A1A_LIGHT0_POS[1],
                                                                       skin_A1A_LIGHT0_POS[2],
                                                                       skin_A1A_LIGHT0_POS[3]);
                                                                       
          glUniform4f(UNIFORM_LIGHT1_POS_skin_A1A,                     skin_A1A_LIGHT1_POS[0],
                                                                       skin_A1A_LIGHT1_POS[1],
                                                                       skin_A1A_LIGHT1_POS[2],
                                                                       skin_A1A_LIGHT1_POS[3]);                                                                       
                                                                       
          glUniform4f(UNIFORM_LIGHT2_POS_skin_A1A,                     skin_A1A_LIGHT2_POS[0],
                                                                       skin_A1A_LIGHT2_POS[1],
                                                                       skin_A1A_LIGHT2_POS[2],
                                                                       skin_A1A_LIGHT2_POS[3]);                                                                         
                                                                       
          
          glUniform1f(UNIFORM_shadowBias_skin_A1A,                     shadowBias);          
          //---------------------------------------
          glUniform1f(UNIFORM_f_0_skin_A1A,                             f_0_skin_A1A);
          glUniform1f(UNIFORM_f_1_skin_A1A,                             f_1_skin_A1A);  
          glUniform1f(UNIFORM_f_2_skin_A1A,                             f_2_skin_A1A);                    
          glUniform1f(UNIFORM_f_3_skin_A1A,                             f_3_skin_A1A);
          glUniform1f(UNIFORM_f_4_skin_A1A,                             f_4_skin_A1A);  
          glUniform1f(UNIFORM_f_5_skin_A1A,                             f_5_skin_A1A);                    
          glUniform1f(UNIFORM_f_6_skin_A1A,                             f_6_skin_A1A);
          glUniform1f(UNIFORM_f_7_skin_A1A,                             f_7_skin_A1A);  
          glUniform1f(UNIFORM_f_8_skin_A1A,                             f_8_skin_A1A);           
          glUniform1f(UNIFORM_f_9_skin_A1A,                             f_9_skin_A1A);         
      
          //=======
          //---------------------------------------
          glUniform1i(UNIFORM_TEX_COLOR_skin_A1A,                  0);         
          glUniform1i(UNIFORM_TEX_SHADOW_skin_A1A,                 1);
          glUniform1i(UNIFORM_TEX_DOT3_skin_A1A,                   2);   

    //==========================================================================
