    //-------------------------------------------------- 
    if(rightThigh_VBO  != 0) 
    { 
        glDeleteBuffers(1, &rightThigh_VBO); 
        rightThigh_VBO  = 0; 
    } 
    if(rightThigh_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &rightThigh_INDICES_VBO); 
        rightThigh_INDICES_VBO  = 0; 
    } 
