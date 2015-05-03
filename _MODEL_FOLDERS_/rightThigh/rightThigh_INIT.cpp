      //------------------------------------------------------------------------------
      #include    "rightThigh.cpp" 
      glGenBuffers(1,              &rightThigh_VBO);  
      glBindBuffer(GL_ARRAY_BUFFER, rightThigh_VBO);  
      glBufferData(GL_ARRAY_BUFFER, sizeof(rightThigh), rightThigh, GL_STATIC_DRAW);  
      glBindBuffer(GL_ARRAY_BUFFER, 0); 
      //------------------------------------------------------------------------------
      #include    "rightThigh_INDICES.cpp"   
      glGenBuffers(1,              &rightThigh_INDICES_VBO);  
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, rightThigh_INDICES_VBO);   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(rightThigh_INDICES), rightThigh_INDICES, GL_STATIC_DRAW);   
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);   
      //========================================================================================================
      rightThigh_boundingBox[0] = -0.047014f;   
      rightThigh_boundingBox[1] =  0.041550f;  
      rightThigh_boundingBox[2] = -0.039045f;   
      rightThigh_boundingBox[3] =  0.039750f;  
      rightThigh_boundingBox[4] = -0.147208f;   
      rightThigh_boundingBox[5] =  0.003949f;  


