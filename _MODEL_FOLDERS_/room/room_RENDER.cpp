setupTransforms_MainColor();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, room_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, room_INDICES_IBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, room_POSITION[0],
                                room_POSITION[1], 
                                room_POSITION[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    room_ROTATION[0],
                                room_ROTATION[1], 
                                room_ROTATION[2], 
                                room_ROTATION[3]); 
    //--------------------------------------------------------
    LoadIdentity(modelRotationMatrix); 
    //--------------------------------------------------------
    Rotate(modelRotationMatrix,    room_ROTATION[0],
                                   room_ROTATION[1], 
                                   room_ROTATION[2], 
                                   room_ROTATION[3]); 
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, room_NORMALMAP); 
    //------------  
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture); 
    //------------  
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, room_COLORMAP); 
    //--------------  
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_2D, room_MASK0MAP); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_INT, 0); 
