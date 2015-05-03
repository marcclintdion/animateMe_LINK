
      //===========================================================================================
      #ifdef __APPLE__
      //--------------
      spriteImage             = [UIImage imageNamed:@"room_DOT3.png"].CGImage ; 
      width                   =  CGImageGetWidth(spriteImage); 
      height                  =  CGImageGetHeight(spriteImage);  
      spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));  
      spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
      CGContextSetBlendMode(spriteContext, kCGBlendModeCopy); 
      CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS 
      CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS 
      CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);  
      CGContextRelease(spriteContext); 
      //--------- 
              glGenTextures(1, &room_NORMALMAP);  
              glBindTexture(GL_TEXTURE_2D, room_NORMALMAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 

      //-------------------------------------------------------------------------------------------
      spriteImage             = [UIImage imageNamed:@"room.png"].CGImage ; 
      width                   =  CGImageGetWidth(spriteImage); 
      height                  =  CGImageGetHeight(spriteImage);  
      spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));  
      spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
      CGContextSetBlendMode(spriteContext, kCGBlendModeCopy); 
      CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS 
      CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS 
      CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);  
      CGContextRelease(spriteContext); 
      //--------- 
              glGenTextures(1, &room_COLORMAP);  
              glBindTexture(GL_TEXTURE_2D, room_COLORMAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 

      //-------------------------------------------------------------------------------------------
      spriteImage             = [UIImage imageNamed:@"room_MASK0.png"].CGImage ; 
      width                   =  CGImageGetWidth(spriteImage); 
      height                  =  CGImageGetHeight(spriteImage);  
      spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));  
      spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
      CGContextSetBlendMode(spriteContext, kCGBlendModeCopy); 
      CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS 
      CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS 
      CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);  
      CGContextRelease(spriteContext); 
      //--------- 
              glGenTextures(1, &room_MASK0MAP);  
              glBindTexture(GL_TEXTURE_2D, room_MASK0MAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 
      //---- 
      #endif 
      //========================================================================================================
      #ifdef WIN32 
      loadTexture("_MODEL_FOLDERS_/room/room_DOT3.png",           room_NORMALMAP); 

      loadTexture("_MODEL_FOLDERS_/room/room.png",                room_COLORMAP); 
      loadTexture("_MODEL_FOLDERS_/room/roomMASK0.png",           room_MASK0MAP); 
      #endif 
      //------------------------------------------------------------------------------
      #include    "room.cpp" 
      glGenBuffers(1,              &room_VBO);  
      glBindBuffer(GL_ARRAY_BUFFER, room_VBO);  
      glBufferData(GL_ARRAY_BUFFER, sizeof(room), room, GL_STATIC_DRAW);  
      glBindBuffer(GL_ARRAY_BUFFER, 0); 
      //------------------------------------------------------------------------------
      #include    "room_INDICES.cpp"   
      glGenBuffers(1,              &room_INDICES_IBO);  
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, room_INDICES_IBO);   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(room_INDICES), room_INDICES, GL_STATIC_DRAW);   
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);   
      //========================================================================================================
      room_boundingBox[0] = -2.997267f;   
      room_boundingBox[1] =  2.997267f;  
      room_boundingBox[2] = -2.074022f;   
      room_boundingBox[3] =  2.074022f;  
      room_boundingBox[4] = -1.998275f;   
      room_boundingBox[5] =  1.998275f;  


