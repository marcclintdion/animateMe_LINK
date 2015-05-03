setupTransforms_Shadows();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, leftShoulder_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, leftShoulder_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, leftShoulder_POSITION[0] + moveSet[0],
                                leftShoulder_POSITION[1] + moveSet[1], 
                                leftShoulder_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    leftShoulder_ROTATION[0],
                                leftShoulder_ROTATION[1], 
                                leftShoulder_ROTATION[2], 
                                leftShoulder_ROTATION[3]); 
    //--------------------------------------------------------
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0); 
