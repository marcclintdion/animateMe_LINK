//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-


    //====================================================================================
    //#include "_SHADERS/drawMainColor_FBO/drawMainColor_FBO_SHUTDOWN.cpp"
    //====================================================================================
    #include "_SHADERS_/drawMainColor_PRIMARY_FBO/drawMainColor_PRIMARY_FBO_SHUTDOWN.cpp"
    //====================================================================================
    //#include "_SHADERS_/hardEdgeShadow_FBO/hardEdgeShadow_FBO_SHUTDOWN.cpp"
    //==================================================================================== 
    #include "_SHADERS_/generic_FBO/generic_FBO_SHUTDOWN.cpp"
    //==================================================================================== 
    
    //####################################################################################    
   
    //====================================================================================     
    #include "_SHADERS_/finalComposite/finalComposite_SHADER_SHUTDOWN.cpp"
    //====================================================================================        
    #include "_SHADERS_/SHADOWS/shadows_32bit_Stride_SHADER_SHUTDOWN.cpp"
    //====================================================================================      
    //#include "_SHADERS_/gaussianBlur_9x/gaussianBlur_9x_SHADER_SHUTDOWN.cpp"
    //====================================================================================
    #include "_SHADERS_/copyFBO/copyFBO_SHADER_SHUTDOWN.cpp"
    //==================================================================================== 
    #include "_SHADERS_/PowerVR_blur/PowerVR_blur_SHADER_SHUTDOWN.cpp"
   //====================================================================================        
    //#include "_SHADERS_/softDiffuse_SHADER/softDiffuse_SHADER_SHUTDOWN.cpp"
    //====================================================================================        
    #include "_SHADERS_/mixShaders/bronzePlastic/bronzePlastic_SHADER_END.cpp"
    //====================================================================================        
    #include "_SHADERS_/mixShaders/stoneBronze/stoneBronze_SHADER_END.cpp"
    if(stone_Fresnel_TEX  != 0)
    {
        glDeleteTextures(1, &stone_Fresnel_TEX); //-> I_PUT_THE_TEXTURE_HERE_BECAUSE_IT_IS_BEING_USED_BY_THIS_FRESNEL_ALGORITHM
        stone_Fresnel_TEX  = 0;
    }
    //====================================================================================
    #include "_SHADERS_/skinShaders/A1A/skin_A1A_SHADER_END.cpp"
    //====================================================================================
    
    
    
    //####################################################################################
    //====================================================================================
    #include "_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_SHUTDOWN.cpp"
    //========================================================================= 
    //=========================================================================     
    //=========================================================================     
    #include "_MODEL_FOLDERS_\linkTextures\linkTextures_SHUTDOWN.cpp"  
    //=========================================================================     
    #include "_MODEL_FOLDERS_\rightHeel\rightHeel_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\rightShin\rightShin_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\rightThigh\rightThigh_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\rightHand\rightHand_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\rightForearm\rightForearm_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\rightShoulder\rightShoulder_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\head\head_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftHand\leftHand_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftForearm\leftForearm_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftShoulder\leftShoulder_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftToe\leftToe_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftHeel\leftHeel_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftShin\leftShin_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\leftThigh\leftThigh_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\torso\torso_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\hips\hips_SHUTDOWN.cpp"  
    //========================================================================= 
    #include "_MODEL_FOLDERS_\rightToe\rightToe_SHUTDOWN.cpp"  

