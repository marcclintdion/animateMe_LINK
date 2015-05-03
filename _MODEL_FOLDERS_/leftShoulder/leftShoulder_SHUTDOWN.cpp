    //-------------------------------------------------- 
    if(leftShoulder_VBO  != 0) 
    { 
        glDeleteBuffers(1, &leftShoulder_VBO); 
        leftShoulder_VBO  = 0; 
    } 
    if(leftShoulder_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &leftShoulder_INDICES_VBO); 
        leftShoulder_INDICES_VBO  = 0; 
    } 
