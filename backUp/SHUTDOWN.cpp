//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-


    //====================================================================================
    //#include "_SHADERS/drawMainColor_FBO/drawMainColor_FBO_SHUTDOWN.cpp"
    //====================================================================================
    #include "_SHADERS/drawMainColor_PRIMARY_FBO/drawMainColor_PRIMARY_FBO_SHUTDOWN.cpp"
    //====================================================================================
    //#include "_SHADERS/hardEdgeShadow_FBO/hardEdgeShadow_FBO_SHUTDOWN.cpp"
    //==================================================================================== 
    #include "_SHADERS/generic_FBO/generic_FBO_SHUTDOWN.cpp"
    //==================================================================================== 
    
    //####################################################################################    
   
    //====================================================================================     
    #include "_SHADERS/finalComposite/finalComposite_SHADER_SHUTDOWN.cpp"
    //====================================================================================        
    #include "_SHADERS/SHADOWS/shadows_32bit_Stride_SHADER_SHUTDOWN.cpp"
    //====================================================================================      
    //#include "_SHADERS/gaussianBlur_9x/gaussianBlur_9x_SHADER_SHUTDOWN.cpp"
    //====================================================================================
    #include "_SHADERS/copyFBO/copyFBO_SHADER_SHUTDOWN.cpp"
    //==================================================================================== 
    #include "_SHADERS/PowerVR_blur/PowerVR_blur_SHADER_SHUTDOWN.cpp"
   //====================================================================================        
    //#include "_SHADERS/softDiffuse_SHADER/softDiffuse_SHADER_SHUTDOWN.cpp"
    //====================================================================================        
    #include "_SHADERS/mixShaders/bronzePlastic/bronzePlastic_SHADER_END.cpp"
    //====================================================================================        
    #include "_SHADERS/mixShaders/stoneBronze/stoneBronze_SHADER_END.cpp"
    if(stone_Fresnel_TEX  != 0)
    {
        glDeleteTextures(1, &stone_Fresnel_TEX); //-> I_PUT_THE_TEXTURE_HERE_BECAUSE_IT_IS_BEING_USED_BY_THIS_FRESNEL_ALGORITHM
        stone_Fresnel_TEX  = 0;
    }
    //====================================================================================
    #include "_SHADERS/skinShaders/A1A/skin_A1A_SHADER_END.cpp"
    //====================================================================================
    
    
    
    //####################################################################################
    //====================================================================================
    #include "_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_SHUTDOWN.cpp"
    //=========================================================================
