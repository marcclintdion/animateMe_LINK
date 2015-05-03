setupTransforms_Shadows();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, rightShin_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, rightShin_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, rightShin_POSITION[0] + moveSet[0],
                                rightShin_POSITION[1] + moveSet[1], 
                                rightShin_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    rightShin_ROTATION[0],
                                rightShin_ROTATION[1], 
                                rightShin_ROTATION[2], 
                                rightShin_ROTATION[3]); 
    //--------------------------------------------------------
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0); 
