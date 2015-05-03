//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"wishingWell_B_DOT3.png"].CGImage;      
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData, width,                               
                                                                 height,                              
                                                                 8,                                   
                                                                 width * 4,                           
                                                                 CGImageGetColorSpace(spriteImage),   
                                                                 kCGImageAlphaNoneSkipLast);          
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &wishingWell_B_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, wishingWell_B_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"wishingWell_B.png"].CGImage;           
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData,                                      
                                                     width,                                           
                                                     height,                                          
                                                     8,                                               
                                                     width * 4,                                       
                                                     CGImageGetColorSpace(spriteImage),               
                                                     kCGImageAlphaNoneSkipLast);                      
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &wishingWell_B_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, wishingWell_B_TEXTUREMAP);                              
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
            free(spriteData);                                                                         
        }                                                                                             
//----                                                                                                
#endif                                                                                                
//========================================================================                            
    //-----------------------------------------------------------------------------------                                              
    #ifdef WIN32                                                                                                                       
    loadTexture("_MODEL_FOLDERS_/wishingWell_B/wishingWell_B_DOT3.png",     wishingWell_B_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/wishingWell_B/wishingWell_B.png",          wishingWell_B_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "wishingWell_B.cpp"                                                                                         
    glGenBuffers(1,              &wishingWell_B_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, wishingWell_B_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(wishingWell_B), wishingWell_B, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "wishingWell_B_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &wishingWell_B_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, wishingWell_B_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(wishingWell_B_INDICES), wishingWell_B_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    wishingWell_B_boundingBox[0] = -4.08441;
    wishingWell_B_boundingBox[1] = 4.13398;
    wishingWell_B_boundingBox[2] = -0.611552;
    wishingWell_B_boundingBox[3] = 1.59744;
    wishingWell_B_boundingBox[4] = -4.0825;
    wishingWell_B_boundingBox[5] = 4.0986;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -4.08441;
    collisionBoxArray[boxCount][1] = 4.13398;
    collisionBoxArray[boxCount][2] = -0.611552;
    collisionBoxArray[boxCount][3] = 1.59744;
    collisionBoxArray[boxCount][4] = -4.0825;
    collisionBoxArray[boxCount][5] = 4.0986;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
