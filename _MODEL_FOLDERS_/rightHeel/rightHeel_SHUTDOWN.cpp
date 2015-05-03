    //-------------------------------------------------- 
    if(rightHeel_VBO  != 0) 
    { 
        glDeleteBuffers(1, &rightHeel_VBO); 
        rightHeel_VBO  = 0; 
    } 
    if(rightHeel_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &rightHeel_INDICES_VBO); 
        rightHeel_INDICES_VBO  = 0; 
    } 
