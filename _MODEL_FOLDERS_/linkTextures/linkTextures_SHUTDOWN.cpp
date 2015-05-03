    if(link_COLORMAP  != 0)
    { 
        glDeleteTextures(1, &link_COLORMAP); 
        link_COLORMAP  = 0; 
    } 
    if(link_NORMALMAP != 0) 
    { 
        glDeleteTextures(1, &link_NORMALMAP); 
        link_NORMALMAP = 0; 
    } 
