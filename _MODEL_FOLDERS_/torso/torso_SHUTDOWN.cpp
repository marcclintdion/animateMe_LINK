    //-------------------------------------------------- 
    if(torso_VBO  != 0) 
    { 
        glDeleteBuffers(1, &torso_VBO); 
        torso_VBO  = 0; 
    } 
    if(torso_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &torso_INDICES_VBO); 
        torso_INDICES_VBO  = 0; 
    } 
