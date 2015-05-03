setupTransforms_Shadows();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, domeTree_x4_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, domeTree_x4_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, domeTree_x4_POSITION[0] + moveSet[0],
                                domeTree_x4_POSITION[1] + moveSet[1], 
                                domeTree_x4_POSITION[2] + moveSet[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    domeTree_x4_ROTATION[0],
                                domeTree_x4_ROTATION[1], 
                                domeTree_x4_ROTATION[2], 
                                domeTree_x4_ROTATION[3]); 
    //--------------------------------------------------------
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 7485, GL_UNSIGNED_INT, 0); 
