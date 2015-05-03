setupTransforms_Shadows();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, leftShin_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, leftShin_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, leftShin_POSITION[0] + moveSet[0],
                                leftShin_POSITION[1] + moveSet[1], 
                                leftShin_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    leftShin_ROTATION[0],
                                leftShin_ROTATION[1], 
                                leftShin_ROTATION[2], 
                                leftShin_ROTATION[3]); 
    //--------------------------------------------------------
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0); 
