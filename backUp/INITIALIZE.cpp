//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-



//glGetIntegerv(GL_MAX_COLOR_ATTACHMENTS,   &getOpenGL_ExtentionValues);//use to test for extention info

    //=============================================================================================================


    //====================================================================================
    // #include "_MODEL_FOLDERS_/lightSpheres/lightSpheres_Init.cpp"
    //=========================================================================        
    //#include "_SHADERS/drawMainColor_FBO/drawMainColor_FBO_INIT.cpp"
    //=========================================================================
    #include "_SHADERS/drawMainColor_PRIMARY_FBO/drawMainColor_PRIMARY_FBO_INIT.cpp"
    //=========================================================================
    //#include "_SHADERS/hardEdgeShadow_FBO/hardEdgeShadow_FBO_INIT.cpp"
    //====================================================================================    
    #include "_SHADERS/generic_FBO/generic_FBO_INIT.cpp"
    //====================================================================================    
    #include "_SHADERS/softDiffuse_FBO/softDiffuse_FBO_INIT.cpp"
    //=========================================================================
    
    //#####################################################################################################################    
    
    
    //====================================================================================       
    #include "_SHADERS/finalComposite/finalComposite_SHADER_INIT.cpp"
    //====================================================================================
    #include "_SHADERS/SHADOWS/shadows_32bit_Stride_SHADER_INIT.cpp"    
    //====================================================================================
    //#include "_SHADERS/gaussianBlur_9x/gaussianBlur_9x_Horizontal_SHADER_INIT.cpp"                                                                   
    //#include "_SHADERS/gaussianBlur_9x/gaussianBlur_9x_Vertical_SHADER_INIT.cpp"  
    //====================================================================================
    #include "_SHADERS/copyFBO/copyFBO_SHADER_INIT.cpp"        
    //====================================================================================     
    #include "_SHADERS/PowerVR_blur/PowerVR_blur_SHADER_INIT.cpp"
    //====================================================================================
    loadTexture("_SHADERS/cornerStone.png",             stone_Fresnel_TEX);   
    #include "_SHADERS/mixShaders/bronzePlastic/bronzePlastic_SHADER_INIT.cpp"
    //====================================================================================  
    #include "_SHADERS/mixShaders/stoneBronze/stoneBronze_SHADER_INIT.cpp"
    //====================================================================================      
    #include "_SHADERS/skinShaders/A1A/skin_A1A_SHADER_INIT.cpp"
    //====================================================================================        
        
    //#####################################################################################################################
    
    
    //====================================================================================       
    #include "_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_INIT.cpp"
    //========================================================================= 
