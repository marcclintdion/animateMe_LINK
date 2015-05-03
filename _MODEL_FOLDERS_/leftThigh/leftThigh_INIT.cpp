      //------------------------------------------------------------------------------
      #include    "leftThigh.cpp" 
      glGenBuffers(1,              &leftThigh_VBO);  
      glBindBuffer(GL_ARRAY_BUFFER, leftThigh_VBO);  
      glBufferData(GL_ARRAY_BUFFER, sizeof(leftThigh), leftThigh, GL_STATIC_DRAW);  
      glBindBuffer(GL_ARRAY_BUFFER, 0); 
      //------------------------------------------------------------------------------
      #include    "leftThigh_INDICES.cpp"   
      glGenBuffers(1,              &leftThigh_INDICES_VBO);  
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, leftThigh_INDICES_VBO);   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(leftThigh_INDICES), leftThigh_INDICES, GL_STATIC_DRAW);   
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);   
      //========================================================================================================
      leftThigh_boundingBox[0] = -0.044709f;   
      leftThigh_boundingBox[1] =  0.043855f;  
      leftThigh_boundingBox[2] = -0.039045f;   
      leftThigh_boundingBox[3] =  0.039750f;  
      leftThigh_boundingBox[4] = -0.146694f;   
      leftThigh_boundingBox[5] =  0.004463f;  


