    //-------------------------------------------------- 
    if(head_VBO  != 0) 
    { 
        glDeleteBuffers(1, &head_VBO); 
        head_VBO  = 0; 
    } 
    if(head_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &head_INDICES_VBO); 
        head_INDICES_VBO  = 0; 
    } 
