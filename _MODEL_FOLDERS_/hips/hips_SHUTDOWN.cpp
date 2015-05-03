    //-------------------------------------------------- 
    if(hips_VBO  != 0) 
    { 
        glDeleteBuffers(1, &hips_VBO); 
        hips_VBO  = 0; 
    } 
    if(hips_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &hips_INDICES_VBO); 
        hips_INDICES_VBO  = 0; 
    } 
