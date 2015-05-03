    //-------------------------------------------------- 
    if(leftHeel_VBO  != 0) 
    { 
        glDeleteBuffers(1, &leftHeel_VBO); 
        leftHeel_VBO  = 0; 
    } 
    if(leftHeel_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &leftHeel_INDICES_VBO); 
        leftHeel_INDICES_VBO  = 0; 
    } 
