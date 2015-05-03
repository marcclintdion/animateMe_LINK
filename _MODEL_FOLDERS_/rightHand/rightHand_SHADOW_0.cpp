setupTransforms_Shadows();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, rightHand_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, rightHand_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, rightHand_POSITION[0] + moveSet[0],
                                rightHand_POSITION[1] + moveSet[1], 
                                rightHand_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    rightHand_ROTATION[0],
                                rightHand_ROTATION[1], 
                                rightHand_ROTATION[2], 
                                rightHand_ROTATION[3]); 
    //--------------------------------------------------------
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0); 
