    //-------------------------------------------------- 
    if(rightToe_VBO  != 0) 
    { 
        glDeleteBuffers(1, &rightToe_VBO); 
        rightToe_VBO  = 0; 
    } 
    if(rightToe_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &rightToe_INDICES_VBO); 
        rightToe_INDICES_VBO  = 0; 
    } 
