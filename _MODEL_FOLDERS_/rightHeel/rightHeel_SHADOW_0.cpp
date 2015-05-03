setupTransforms_Shadows();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, rightHeel_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, rightHeel_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, rightHeel_POSITION[0] + moveSet[0],
                                rightHeel_POSITION[1] + moveSet[1], 
                                rightHeel_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    rightHeel_ROTATION[0],
                                rightHeel_ROTATION[1], 
                                rightHeel_ROTATION[2], 
                                rightHeel_ROTATION[3]); 
    //--------------------------------------------------------
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 96, GL_UNSIGNED_INT, 0); 
