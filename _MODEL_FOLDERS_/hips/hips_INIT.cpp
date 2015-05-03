      //------------------------------------------------------------------------------
      #include    "hips.cpp" 
      glGenBuffers(1,              &hips_VBO);  
      glBindBuffer(GL_ARRAY_BUFFER, hips_VBO);  
      glBufferData(GL_ARRAY_BUFFER, sizeof(hips), hips, GL_STATIC_DRAW);  
      glBindBuffer(GL_ARRAY_BUFFER, 0); 
      //------------------------------------------------------------------------------
      #include    "hips_INDICES.cpp"   
      glGenBuffers(1,              &hips_INDICES_VBO);  
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, hips_INDICES_VBO);   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(hips_INDICES), hips_INDICES, GL_STATIC_DRAW);   
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);   
      //========================================================================================================
      hips_boundingBox[0] = -0.110740f;   
      hips_boundingBox[1] =  0.101383f;  
      hips_boundingBox[2] = -0.065972f;   
      hips_boundingBox[3] =  0.053562f;  
      hips_boundingBox[4] = -0.005928f;   
      hips_boundingBox[5] =  0.148111f;  


