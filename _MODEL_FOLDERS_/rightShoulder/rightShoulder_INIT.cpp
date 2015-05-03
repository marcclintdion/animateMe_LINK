      //------------------------------------------------------------------------------
      #include    "rightShoulder.cpp" 
      glGenBuffers(1,              &rightShoulder_VBO);  
      glBindBuffer(GL_ARRAY_BUFFER, rightShoulder_VBO);  
      glBufferData(GL_ARRAY_BUFFER, sizeof(rightShoulder), rightShoulder, GL_STATIC_DRAW);  
      glBindBuffer(GL_ARRAY_BUFFER, 0); 
      //------------------------------------------------------------------------------
      #include    "rightShoulder_INDICES.cpp"   
      glGenBuffers(1,              &rightShoulder_INDICES_VBO);  
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, rightShoulder_INDICES_VBO);   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(rightShoulder_INDICES), rightShoulder_INDICES, GL_STATIC_DRAW);   
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);   
      //========================================================================================================
      rightShoulder_boundingBox[0] = -0.055816f;   
      rightShoulder_boundingBox[1] =  0.010456f;  
      rightShoulder_boundingBox[2] = -0.028785f;   
      rightShoulder_boundingBox[3] =  0.028612f;  
      rightShoulder_boundingBox[4] = -0.113853f;   
      rightShoulder_boundingBox[5] =  0.035412f;  


