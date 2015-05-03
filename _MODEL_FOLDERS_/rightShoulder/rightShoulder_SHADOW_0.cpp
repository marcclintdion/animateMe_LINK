setupTransforms_Shadows();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, rightShoulder_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, rightShoulder_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, rightShoulder_POSITION[0] + moveSet[0],
                                rightShoulder_POSITION[1] + moveSet[1], 
                                rightShoulder_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    rightShoulder_ROTATION[0],
                                rightShoulder_ROTATION[1], 
                                rightShoulder_ROTATION[2], 
                                rightShoulder_ROTATION[3]); 
    //--------------------------------------------------------
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0); 
