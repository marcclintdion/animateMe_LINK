    //-------------------------------------------------- 
    if(leftThigh_VBO  != 0) 
    { 
        glDeleteBuffers(1, &leftThigh_VBO); 
        leftThigh_VBO  = 0; 
    } 
    if(leftThigh_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &leftThigh_INDICES_VBO); 
        leftThigh_INDICES_VBO  = 0; 
    } 
