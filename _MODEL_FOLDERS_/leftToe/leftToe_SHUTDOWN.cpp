    //-------------------------------------------------- 
    if(leftToe_VBO  != 0) 
    { 
        glDeleteBuffers(1, &leftToe_VBO); 
        leftToe_VBO  = 0; 
    } 
    if(leftToe_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &leftToe_INDICES_VBO); 
        leftToe_INDICES_VBO  = 0; 
    } 
