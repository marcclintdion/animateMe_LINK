setupTransforms_Shadows();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, rightThigh_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, rightThigh_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, rightThigh_POSITION[0] + moveSet[0],
                                rightThigh_POSITION[1] + moveSet[1], 
                                rightThigh_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    rightThigh_ROTATION[0],
                                rightThigh_ROTATION[1], 
                                rightThigh_ROTATION[2], 
                                rightThigh_ROTATION[3]); 
    //--------------------------------------------------------
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0); 
