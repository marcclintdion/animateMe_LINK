    //-------------------------------------------------- 
    if(leftHand_VBO  != 0) 
    { 
        glDeleteBuffers(1, &leftHand_VBO); 
        leftHand_VBO  = 0; 
    } 
    if(leftHand_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &leftHand_INDICES_VBO); 
        leftHand_INDICES_VBO  = 0; 
    } 
