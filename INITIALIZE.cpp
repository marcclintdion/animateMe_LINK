//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-



//glGetIntegerv(GL_MAX_COLOR_ATTACHMENTS,   &getOpenGL_ExtentionValues);//use to test for extention info

    //=============================================================================================================


    //====================================================================================
    // #include "_MODEL_FOLDERS_/lightSpheres/lightSpheres_Init.cpp"
    //=========================================================================        
    //#include "_SHADERS_/drawMainColor_FBO/drawMainColor_FBO_INIT.cpp"
    //=========================================================================
    #include "_SHADERS_/drawMainColor_PRIMARY_FBO/drawMainColor_PRIMARY_FBO_INIT.cpp"
    //=========================================================================
    //#include "_SHADERS_/hardEdgeShadow_FBO/hardEdgeShadow_FBO_INIT.cpp"
    //====================================================================================    
    #include "_SHADERS_/generic_FBO/generic_FBO_INIT.cpp"
    //====================================================================================    
    #include "_SHADERS_/softDiffuse_FBO/softDiffuse_FBO_INIT.cpp"
    //=========================================================================
    
    //#####################################################################################################################    
    
    
    //====================================================================================       
    #include "_SHADERS_/finalComposite/finalComposite_SHADER_INIT.cpp"
    //====================================================================================
    #include "_SHADERS_/SHADOWS/shadows_32bit_Stride_SHADER_INIT.cpp"    
    //====================================================================================
    //#include "_SHADERS_/gaussianBlur_9x/gaussianBlur_9x_Horizontal_SHADER_INIT.cpp"                                                                   
    //#include "_SHADERS_/gaussianBlur_9x/gaussianBlur_9x_Vertical_SHADER_INIT.cpp"  
    //====================================================================================
    #include "_SHADERS_/copyFBO/copyFBO_SHADER_INIT.cpp"        
    //====================================================================================     
    #include "_SHADERS_/PowerVR_blur/PowerVR_blur_SHADER_INIT.cpp"
    //====================================================================================
    loadTexture("_SHADERS_/cornerStone.png",             stone_Fresnel_TEX);   
    #include "_SHADERS_/mixShaders/bronzePlastic/bronzePlastic_SHADER_INIT.cpp"
    //====================================================================================  
    #include "_SHADERS_/mixShaders/stoneBronze/stoneBronze_SHADER_INIT.cpp"
    //====================================================================================      
    #include "_SHADERS_/skinShaders/A1A/skin_A1A_SHADER_INIT.cpp"
    //====================================================================================        
        
    //#####################################################################################################################
    
    
    //====================================================================================       
    #include "_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_INIT.cpp"
    //========================================================================= 

    //========================================================================= 
    //=========================================================================     
    #include "_MODEL_FOLDERS_\linkTextures\linkTextures_INIT.cpp"
    //=========================================================================     
    #include "_MODEL_FOLDERS_\rightHeel\rightHeel_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\rightShin\rightShin_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\rightThigh\rightThigh_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\rightHand\rightHand_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\rightForearm\rightForearm_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\rightShoulder\rightShoulder_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\head\head_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftHand\leftHand_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftForearm\leftForearm_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftShoulder\leftShoulder_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftToe\leftToe_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftHeel\leftHeel_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftShin\leftShin_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftThigh\leftThigh_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\torso\torso_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\hips\hips_INIT.cpp"     
    //========================================================================= 
    #include "_MODEL_FOLDERS_\rightToe\rightToe_INIT.cpp"     

