    if(rightToe_COLORMAP  != 0)
    { 
        glDeleteTextures(1, &rightToe_COLORMAP); 
        rightToe_COLORMAP  = 0; 
    } 
    if(rightToe_NORMALMAP != 0) 
    { 
        glDeleteTextures(1, &rightToe_NORMALMAP); 
        rightToe_NORMALMAP = 0; 
    } 
