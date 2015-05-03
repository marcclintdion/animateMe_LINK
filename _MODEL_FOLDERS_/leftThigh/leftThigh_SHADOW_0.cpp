setupTransforms_Shadows();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, leftThigh_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, leftThigh_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, leftThigh_POSITION[0] + moveSet[0],
                                leftThigh_POSITION[1] + moveSet[1], 
                                leftThigh_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    leftThigh_ROTATION[0],
                                leftThigh_ROTATION[1], 
                                leftThigh_ROTATION[2], 
                                leftThigh_ROTATION[3]); 
    //--------------------------------------------------------
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0); 
