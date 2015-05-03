    if(wishingWell_B_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &wishingWell_B_NORMALMAP);    
        wishingWell_B_NORMALMAP = 0;                      
    }                                                              
    if(wishingWell_B_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &wishingWell_B_TEXTUREMAP);   
        wishingWell_B_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(wishingWell_B_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &wishingWell_B_VBO);           
        wishingWell_B_VBO  = 0;                           
    }                                                              
    if(wishingWell_B_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &wishingWell_B_INDICES_VBO);   
        wishingWell_B_INDICES_VBO  = 0;                   
    }                                                              
