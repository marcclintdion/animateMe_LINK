setupTransforms_Shadows();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, leftHand_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, leftHand_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, leftHand_POSITION[0] + moveSet[0],
                                leftHand_POSITION[1] + moveSet[1], 
                                leftHand_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    leftHand_ROTATION[0],
                                leftHand_ROTATION[1], 
                                leftHand_ROTATION[2], 
                                leftHand_ROTATION[3]); 
    //--------------------------------------------------------
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0); 
