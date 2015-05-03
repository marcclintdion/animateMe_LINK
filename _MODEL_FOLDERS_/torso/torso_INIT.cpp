      //------------------------------------------------------------------------------
      #include    "torso.cpp" 
      glGenBuffers(1,              &torso_VBO);  
      glBindBuffer(GL_ARRAY_BUFFER, torso_VBO);  
      glBufferData(GL_ARRAY_BUFFER, sizeof(torso), torso, GL_STATIC_DRAW);  
      glBindBuffer(GL_ARRAY_BUFFER, 0); 
      //------------------------------------------------------------------------------
      #include    "torso_INDICES.cpp"   
      glGenBuffers(1,              &torso_INDICES_VBO);  
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, torso_INDICES_VBO);   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(torso_INDICES), torso_INDICES, GL_STATIC_DRAW);   
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);   
      //========================================================================================================
      torso_boundingBox[0] = -0.093741f;   
      torso_boundingBox[1] =  0.083994f;  
      torso_boundingBox[2] = -0.066186f;   
      torso_boundingBox[3] =  0.053348f;  
      torso_boundingBox[4] = -0.000772f;   
      torso_boundingBox[5] =  0.214153f;  


