    //-------------------------------------------------- 
    if(leftShin_VBO  != 0) 
    { 
        glDeleteBuffers(1, &leftShin_VBO); 
        leftShin_VBO  = 0; 
    } 
    if(leftShin_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &leftShin_INDICES_VBO); 
        leftShin_INDICES_VBO  = 0; 
    } 
