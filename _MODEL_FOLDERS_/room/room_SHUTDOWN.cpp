    if(room_NORMALMAP != 0) 
    { 
        glDeleteTextures(1, &room_NORMALMAP); 
        room_NORMALMAP = 0; 
    } 
    if(room_COLORMAP  != 0)
    { 
        glDeleteTextures(1, &room_COLORMAP); 
        room_COLORMAP  = 0; 
    } 
    if(room_MASK0MAP  != 0)
    { 
        glDeleteTextures(1, &room_MASK0MAP); 
        room_MASK0MAP  = 0; 
    } 
    //-------------------------------------------------- 
    if(room_VBO  != 0) 
    { 
        glDeleteBuffers(1, &room_VBO); 
        room_VBO  = 0; 
    } 
    if(room_INDICES_IBO  != 0) 
    { 
        glDeleteBuffers(1, &room_INDICES_IBO); 
        room_INDICES_IBO  = 0; 
    } 
