runTripleQuat(8); //__MAYBE_THIS_CAN_BE_MOVED_TO_THE_SHADOW_PASS_SO_ITS_ONLY_CALCULATED_ONCE :) THIS_WILL_REQUIRE_THAT_PARTS_HAVE_UNIQUE_MATRICES_SO_THEY_ARE_INSULATED_FROM_SUBSEQUENT_TRANSFORMS 
setupTransforms_MainColor();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, rightHand_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, rightHand_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    LoadIdentity(rightHand_MATRIX); 
    AssignMatrix(rightHand_MATRIX, rightForearm_MATRIX);  
    LoadIdentity(quaternionMatrix); 
    LoadIdentity(tempMatrix_XY); 
    LoadIdentity(tempMatrix_Y); 
    LoadIdentity(tempMatrix_Z); 
    //--------------------------------------------------------
    Translate(rightHand_MATRIX, rightHand_POSITION[0] + moveSet[0],  
                                   rightHand_POSITION[1] + moveSet[1], 
                                   rightHand_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Quaternion_to_Matrix(tempMatrix_X, X_QUATERNION); 
    Quaternion_to_Matrix(tempMatrix_Y, Y_QUATERNION); 
    Quaternion_to_Matrix(tempMatrix_Z, Z_QUATERNION); 
    //----------------------------------------------  
    MultiplyMatrix(tempMatrix_XY,    tempMatrix_X,  tempMatrix_Y);
    MultiplyMatrix(quaternionMatrix, tempMatrix_XY, tempMatrix_Z); 
    MultiplyMatrix(modelWorldMatrix, rightHand_MATRIX ,  quaternionMatrix); 
    AssignMatrix(rightHand_MATRIX, modelWorldMatrix); 
    Translate(rightHand_MATRIX, -1.0 * (rightHand_POSITION[0] + moveSet[0]),  
                                   -1.0 * (  rightHand_POSITION[1] + moveSet[1]), 
                                   -1.0 * ( rightHand_POSITION[2] + moveSet[2])); 
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture (GL_TEXTURE0);  
    glBindTexture(GL_TEXTURE_2D, link_COLORMAP); 
    //------------  
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture); 
    //------------  
    glActiveTexture ( GL_TEXTURE2 );  
    glBindTexture(GL_TEXTURE_2D, link_NORMALMAP); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0); 
