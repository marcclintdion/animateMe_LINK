    //-------------------------------------------------- 
    if(rightHand_VBO  != 0) 
    { 
        glDeleteBuffers(1, &rightHand_VBO); 
        rightHand_VBO  = 0; 
    } 
    if(rightHand_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &rightHand_INDICES_VBO); 
        rightHand_INDICES_VBO  = 0; 
    } 
