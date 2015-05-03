setupTransforms_Shadows();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, hips_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, hips_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, hips_POSITION[0] + moveSet[0],
                                hips_POSITION[1] + moveSet[1], 
                                hips_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    hips_ROTATION[0],
                                hips_ROTATION[1], 
                                hips_ROTATION[2], 
                                hips_ROTATION[3]); 
    //--------------------------------------------------------
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0); 
