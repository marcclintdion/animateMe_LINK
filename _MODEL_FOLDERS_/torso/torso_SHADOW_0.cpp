setupTransforms_Shadows();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, torso_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, torso_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, torso_POSITION[0] + moveSet[0],
                                torso_POSITION[1] + moveSet[1], 
                                torso_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    torso_ROTATION[0],
                                torso_ROTATION[1], 
                                torso_ROTATION[2], 
                                torso_ROTATION[3]); 
    //--------------------------------------------------------
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 132, GL_UNSIGNED_INT, 0); 
