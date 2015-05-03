
    //--------------------------------------------     
        attribute       vec4   position;                                                                                            
        attribute       vec3   normal;                                                                                              
        attribute       vec2   uv0;                                                                                                 
    //--------------------------------------------   
        uniform         mat4   shadowTexMatrix;                                                                                               
        uniform         mat4   modelRotationINVmatrix;                                                                                 
        uniform         mat4   projectionMatrix;                                                                                        
        uniform         mat4   modelViewMatrix;                                                                                         

    //--------------------------------------------                                        
        uniform    vec4   light0_POS;                                                                                          
        uniform    vec4   light1_POS;                                                                                              
        uniform    vec4   light2_POS;                                                                                               
    //--------------------------------------------
        varying    vec4   shadow_uvPASS;                                                                                             
    //--------------------------------------------
        varying    vec4   light0_posPASS;                                                                                      
        varying    vec4   light1_posPASS;                                                                                          
        varying    vec4   light2_posPASS;                                                                                          
   
    //======================================
        varying    vec4   normal_PASS;     
    //======================================    
        varying    vec2   uv0_PASS;                                                                                            
    //======================================   
        varying       vec4    Vertex;                                                                                                                                                   
        varying       vec4    inverseEye;                                                                                        
        varying       vec3    invertView;                                                                                      

    //===============================================================================================
    
     void main()                                                                                                                    
     {                                                                                                                              
    
         Vertex                  =  modelViewMatrix * position;                                                                       
         inverseEye              =  normalize(modelRotationINVmatrix * vec4(0.0, 0.0, -1.0, 0.0));                                            
         invertView              =  normalize(Vertex.xyz * inverseEye.w - inverseEye.xyz * Vertex.w);                                 
       
         //-------------------------------------------------------------------------------    
         normal_PASS             =  modelViewMatrix * vec4(normal, 1.0); 
       
         //-------------------------------------------------------------------------------    
         shadow_uvPASS           =  shadowTexMatrix  * position;                                                                    
         //-------------------------------------------------------------------------------
         uv0_PASS                =  uv0;                                                                                            
         //===============================================================================
         light0_posPASS          =  modelRotationINVmatrix * light0_POS;                                                            
         light1_posPASS          =  modelRotationINVmatrix * light1_POS;                                                                      
         light2_posPASS          =  modelRotationINVmatrix * light2_POS;                                                                      
        
        
          //-------------------------------------------------------------------------------
         gl_Position             =  projectionMatrix * position;                                                                    
    
     }  

