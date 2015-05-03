        uniform  sampler2D     NormalMAP;                                                                                           
        uniform  sampler2D     ShadowMAP;                                                                                             
        uniform  sampler2D     ColorMAP;                                                                                                
        uniform  sampler2D     M1_MAP;                                                                                              
 
    //--------------------------------------------
        uniform    float  f_0;                                                                                                    

    //--------------------------------------------
      
        uniform    vec4   light0_POS;                                                                                          
        uniform    vec4   light1_POS;                                                                                              
        uniform    vec4   light2_POS;                                                                                               
    //--------------------------------------------

    //--------------------------------------------
        uniform    float  shadowBias;                                                                                                 
    //--------------------------------------------    
        varying    vec4   shadow_uvPASS;                                                                                             
    //-------------------------------------------- 
        varying    vec4   light0_posPASS;                                                                                      
        varying    vec4   light1_posPASS;                                                                                          
        varying    vec4   light2_posPASS;                                                                                          
    //======================================
        varying    vec2   uv0_PASS;                                                                                            
    //======================================
        varying    vec4   normal_PASS;     
    //======================================   
 
                  vec3   normalTex;                                                                                           
                   float  nDotL0;                                                                                              
    //--------------------------------------------
    //               float  bias;                                                                                                
                   float  comp;                                                                                                
                   float  depth_PowerVR;                                                                                       
                   float  shadow;                                                                                              
    //--------------------------------------------    
                   vec4   colorTex;                                                                                            
                   float  mask1;                                                                                               
    //--------------------------------------------                                                                       
    
    //======================================   
        varying       vec4    Vertex;                                                                                                                                                   
        varying       vec4    inverseEye;                                                                                        
        varying       vec3    invertView;                                                                                      
         //---------
                    vec3   Reflect;                                                                                                                                                             
                    vec3   RH;                                                                                                                                                               
                    float  fresnel;                                                                                            
                    float  fresnelReflectance = 0.1;                                                                           	                                                      
                    vec4   fresnelTex;                                                                                         
    //====================================== 
                    vec4   color_A;                                                                                            
                    vec4   color_B;                                                                                              
                    vec4   color_C;                                                                                              
    
    //======================================  
    
        
    //================================================================================================================                    
  
    void main()                                                                                                                     
    {                                                                                                                               
        
        
        normalTex                =  texture2D(NormalMAP,     uv0_PASS.xy).xyz;              //CorrectedBlenderPose 
        colorTex                 =  texture2D(ColorMAP,      uv0_PASS.xy);                                                               
        //        mask1                =  texture2D(M1_MAP,         uv0_PASS.xy).r;                                                         
        //-------
     
    //---------------------------------------------------------------------------------------------------------------
        normalTex                =  normalize((normalTex  - 0.5));                                                      
        normalTex.zy             =  normalTex.zy * -1.0;                                                                            
        nDotL0                   =  max(dot(normalTex, normalize(light0_POS.xyz - normalize(normal_PASS.xyz))), 0.0);          
        //nDotL0                   =  max(dot(normalTex, normalize(light0_posPASS.xyz - normalize(gl_FragCoord.xyz))), 0.0);  
    //---------------------------------------------------------------------------------------------------------------
        Reflect                  =  reflect(invertView, normalTex.xyz);                                                                                
        RH                       =  normalize(Reflect + invertView); //this component is sensitive to ---> (Reflect +/- invertView)                      
        fresnel                  =  fresnelReflectance + (1.0 - fresnelReflectance) * pow(dot(invertView, RH), 5.0)  ;    
    //---------------------------------------------------------------------------------------------------------------
                                         //bias                  =  shiny * tan(acos(nDotL0));                                      
                                         //bias                  =  clamp(bias, 0.0, 0.1);                                                        
        comp                     = (shadow_uvPASS.z / shadow_uvPASS.w) - shadowBias; //    bias =  0.006114;   
        depth_PowerVR            =  texture2DProj(ShadowMAP, shadow_uvPASS).r;                                                      
   
        shadow                   =  comp <= depth_PowerVR ? 1.0 : 0.5;                                                              
    //---------------------------------------------------------------------------------------------------------------




//==============================================================
        gl_FragColor                   =       colorTex;                                                                                                                       

        //gl_FragColor.w                 =       shadow;                                                                                                                     
  
//       gl_FragColor                   =       vec4(fresnel);                                                                                                                       
    
    
    }

