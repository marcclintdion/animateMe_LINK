    //-------------------------------------------------- 
    if(rightShin_VBO  != 0) 
    { 
        glDeleteBuffers(1, &rightShin_VBO); 
        rightShin_VBO  = 0; 
    } 
    if(rightShin_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &rightShin_INDICES_VBO); 
        rightShin_INDICES_VBO  = 0; 
    } 
