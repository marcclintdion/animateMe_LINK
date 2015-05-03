    //-------------------------------------------------- 
    if(rightShoulder_VBO  != 0) 
    { 
        glDeleteBuffers(1, &rightShoulder_VBO); 
        rightShoulder_VBO  = 0; 
    } 
    if(rightShoulder_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &rightShoulder_INDICES_VBO); 
        rightShoulder_INDICES_VBO  = 0; 
    } 
