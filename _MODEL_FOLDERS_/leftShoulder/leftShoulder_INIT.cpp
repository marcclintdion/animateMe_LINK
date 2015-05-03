      //------------------------------------------------------------------------------
      #include    "leftShoulder.cpp" 
      glGenBuffers(1,              &leftShoulder_VBO);  
      glBindBuffer(GL_ARRAY_BUFFER, leftShoulder_VBO);  
      glBufferData(GL_ARRAY_BUFFER, sizeof(leftShoulder), leftShoulder, GL_STATIC_DRAW);  
      glBindBuffer(GL_ARRAY_BUFFER, 0); 
      //------------------------------------------------------------------------------
      #include    "leftShoulder_INDICES.cpp"   
      glGenBuffers(1,              &leftShoulder_INDICES_VBO);  
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, leftShoulder_INDICES_VBO);   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(leftShoulder_INDICES), leftShoulder_INDICES, GL_STATIC_DRAW);   
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);   
      //========================================================================================================
      leftShoulder_boundingBox[0] = -0.010998f;   
      leftShoulder_boundingBox[1] =  0.055274f;  
      leftShoulder_boundingBox[2] = -0.028785f;   
      leftShoulder_boundingBox[3] =  0.028612f;  
      leftShoulder_boundingBox[4] = -0.113895f;   
      leftShoulder_boundingBox[5] =  0.035370f;  


