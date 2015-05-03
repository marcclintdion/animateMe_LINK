runTripleQuat(14); //__MAYBE_THIS_CAN_BE_MOVED_TO_THE_SHADOW_PASS_SO_ITS_ONLY_CALCULATED_ONCE :) THIS_WILL_REQUIRE_THAT_PARTS_HAVE_UNIQUE_MATRICES_SO_THEY_ARE_INSULATED_FROM_SUBSEQUENT_TRANSFORMS 
setupTransforms_MainColor();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, rightShin_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, rightShin_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    LoadIdentity(rightShin_MATRIX); 
    AssignMatrix(rightShin_MATRIX, rightThigh_MATRIX);  
    LoadIdentity(quaternionMatrix); 
    LoadIdentity(tempMatrix_XY); 
    LoadIdentity(tempMatrix_Y); 
    LoadIdentity(tempMatrix_Z); 
    //--------------------------------------------------------
    Translate(rightShin_MATRIX, rightShin_POSITION[0] + moveSet[0],  
                                   rightShin_POSITION[1] + moveSet[1], 
                                   rightShin_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Quaternion_to_Matrix(tempMatrix_X, X_QUATERNION); 
    Quaternion_to_Matrix(tempMatrix_Y, Y_QUATERNION); 
    Quaternion_to_Matrix(tempMatrix_Z, Z_QUATERNION); 
    //----------------------------------------------  
    MultiplyMatrix(tempMatrix_XY,    tempMatrix_X,  tempMatrix_Y);
    MultiplyMatrix(quaternionMatrix, tempMatrix_XY, tempMatrix_Z); 
    MultiplyMatrix(modelWorldMatrix, rightShin_MATRIX ,  quaternionMatrix); 
    AssignMatrix(rightShin_MATRIX, modelWorldMatrix); 
    Translate(rightShin_MATRIX, -1.0 * (rightShin_POSITION[0] + moveSet[0]),  
                                   -1.0 * (  rightShin_POSITION[1] + moveSet[1]), 
                                   -1.0 * ( rightShin_POSITION[2] + moveSet[2])); 
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
